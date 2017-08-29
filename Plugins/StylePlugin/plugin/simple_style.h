#ifndef SIMPLE_STYLE_H
#define SIMPLE_STYLE_H

#include <QProxyStyle>

class SimpleStyle : public QProxyStyle
{
    Q_OBJECT

public:
    SimpleStyle() {}

    void polish(QPalette &palette) override
    {
        palette.setBrush(QPalette::ButtonText, Qt::blue);
    }
};

#endif // SIMPLE_STYLE_H
