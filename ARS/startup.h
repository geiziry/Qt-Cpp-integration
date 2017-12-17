#ifndef STARTUP_H
#define STARTUP_H
#include <QObject>

class QQmlApplicationEngine;
class MainViewMgr;

class Startup:public QObject
{
    Q_OBJECT
public:
    explicit Startup(QObject* parent=0);
    MainViewMgr& m_mainViewMgr;
private:
    QQmlApplicationEngine& m_engine;
};
#endif // STARTUP_H


