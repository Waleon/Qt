#include <QCoreApplication>
#include <QPluginLoader>
#include <QDir>
#include <QtDebug>
#include <QJsonObject>
#include <QJsonArray>
#include <plugin/person.h>

void loadPlugin()
{
    // 进入插件目录
    QDir pluginsDir(qApp->applicationDirPath());
    pluginsDir.cd("plugins");
    // 查找目录中的所有插件
    foreach (QString fileName, pluginsDir.entryList(QDir::Files)) {
        QPluginLoader loader(pluginsDir.absoluteFilePath(fileName));
        // 返回插件的根组件对象
        QObject *pPlugin = loader.instance();
        if (pPlugin != Q_NULLPTR) {

            // 获取元数据（名称、版本、依赖）
            QJsonObject json = loader.metaData().value("MetaData").toObject();
            qDebug() << "********** MetaData **********";
            qDebug() << json.value("author").toVariant();
            qDebug() << json.value("date").toVariant();
            qDebug() << json.value("name").toVariant();
            qDebug() << json.value("version").toVariant();
            qDebug() << json.value("dependencies").toArray().toVariantList();

            // 访问感兴趣的接口
            IPerson *pPerson = qobject_cast<IPerson *>(pPlugin);
            if (pPerson != Q_NULLPTR) {
                qDebug() << "********** IPerson **********";
                qDebug() << pPerson->name();
                pPerson->eat();
                pPerson->sleep();
                pPerson->doSomething();
            } else {
                qWarning() << "qobject_cast falied";
            }
        }
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    loadPlugin();

    return a.exec();
}
