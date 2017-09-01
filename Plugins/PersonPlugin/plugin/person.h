#ifndef PERSON_H
#define PERSON_H

#include <QtPlugin>
#include <QString>

class IPerson
{
public:
    virtual ~IPerson() {}
    virtual QString name() = 0;  // 人有名字
    virtual void eat() = 0;  // 人需要吃东西
    virtual void sleep() = 0;  // 人需要睡觉
    virtual void doSomething() = 0;  // 人还需要干其他事
};

#define IPerson_iid "org.qt-project.Qt.Examples.IPerson"

Q_DECLARE_INTERFACE(IPerson, IPerson_iid)

#endif // PERSON_H
