#ifndef STYLE_PLUGIN_H
#define STYLE_PLUGIN_H

#include <QStylePlugin>
#include "simple_style.h"

class StylePlugin : public QStylePlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QStyleFactoryInterface" FILE "simple_style.json")

public:
    StylePlugin() {}

    QStyle *create(const QString &key) override
    {
        if (key.toLower() == "simplestyle")
            return new SimpleStyle();

        return Q_NULLPTR;
    }
};

#endif // STYLE_PLUGIN_H
