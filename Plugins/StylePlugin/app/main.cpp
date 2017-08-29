#include <QApplication>
#include <QPushButton>
#include <QStyleFactory>
#include <qDebug>

int main(int argv, char *args[])
{
    QApplication app(argv, args);

    // 设置样式
    qDebug() << QStyleFactory::keys();
    QApplication::setStyle(QStyleFactory::create("simplestyle"));

    QPushButton button("Blue Button");
    button.resize(300, 100);
    button.show();

    return app.exec();
}
