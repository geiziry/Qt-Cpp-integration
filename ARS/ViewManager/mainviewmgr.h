#ifndef MAINVIEWMGR_H
#define MAINVIEWMGR_H
#include "propertyhelper.h"

#include <QObject>
#include <QString>

class MainViewMgr : public QObject
{
    Q_OBJECT
    READONLY_PROPERTY(QString,appName)
//    Q_PROPERTY(QString appName READ appName CONSTANT)
    Q_PROPERTY(QString appNameVer READ appNameVer CONSTANT)
    AUTO_PROPERTY(bool, powerOn)
public:
    explicit MainViewMgr(QObject *parent = nullptr);
//    QString appName()const{return m_appName;}
    QString appNameVer()const{return appName()+" "+APP_VER;}
private:
//    QString m_appName;

signals:

public slots:

private slots:
    void debugPowerOn(bool value);
};

#endif // MAINVIEWMGR_H
