#ifndef PROGRAMMER_H
#define PROGRAMMER_H

#include "person.h"
#include <QObject>

class Programmer : public QObject, IPerson
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID IPerson_iid FILE "programmer.json")
    Q_INTERFACES(IPerson)

public:
    virtual QString name() Q_DECL_OVERRIDE;
    virtual void eat() Q_DECL_OVERRIDE;
    virtual void sleep() Q_DECL_OVERRIDE;
    virtual void doSomething() Q_DECL_OVERRIDE;
};

#endif // PROGRAMMER_H
