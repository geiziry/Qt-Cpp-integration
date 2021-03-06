/****************************************************************************
**
** Namespace Pxserver generated by dumpcpp v5.9.2 using
** dumpcpp C:\Program Files\Petroleum Experts\IPM 10\pxserver.tlb
** from the type library C:\Program Files\Petroleum Experts\IPM 10\pxserver.tlb
**
****************************************************************************/

#ifndef QAX_DUMPCPP_PXSERVER_H
#define QAX_DUMPCPP_PXSERVER_H

// Define this symbol to __declspec(dllexport) or __declspec(dllimport)
#ifndef PXSERVER_EXPORT
#define PXSERVER_EXPORT
#endif

#include <qaxobject.h>
#include <qaxwidget.h>
#include <qdatetime.h>
#include <qpixmap.h>

struct IDispatch;


// Referenced namespace

namespace Pxserver {


class PXSERVER_EXPORT IPxserver : public QAxObject
{
public:
    IPxserver(IDispatch *subobject = 0, QAxObject *parent = 0)
    : QAxObject((IUnknown*)subobject, parent)
    {
        internalRelease();
    }

    /*
    Method DoAbort
    */
    inline int DoAbort(const QString& CmdStr);

    /*
    Method DoCmd2
    */
    inline int DoCmd2(const QString& CmdStr);

    /*
    Method DoCmd2Async
    */
    inline int DoCmd2Async(const QString& CmdStr);

    /*
    Method DoCommand
    */
    inline int DoCommand(const QString& CmdStr);

    /*
    Method DoCommandAsync
    */
    inline int DoCommandAsync(const QString& CmdStr);

    /*
    Method GetBlob
    */
    inline int GetBlob(const QString& VariableString, QString& BlobData);

    /*
    Method GetErrorDescription
    */
    inline QString GetErrorDescription(int lErrorNumber);

    /*
    Method GetErrorDescription2
    */
    inline QString GetErrorDescription2(int lErrorNumber);

    /*
    Method GetLastError
    */
    inline int GetLastError(const QString& Product);

    /*
    Method GetLastError2
    */
    inline int GetLastError2(const QString& Product);

    /*
    Method GetLastErrorMessage
    */
    inline QString GetLastErrorMessage(const QString& Product);

    /*
    Method GetValue
    */
    inline QString GetValue(const QString& VariableString);

    /*
    Method GetValue2
    */
    inline QString GetValue2(const QString& VariableString);

    /*
    Method IsBusy
    */
    inline int IsBusy(const QString& Product);

    /*
    Method IsReady
    */
    inline int IsReady(const QString& Product);

    /*
    Method RecordingInsertBreakpoint
    */
    inline int RecordingInsertBreakpoint(const QString& CmdStr);

    /*
    Method RecordingInsertComment
    */
    inline int RecordingInsertComment(const QString& CmdStr);

    /*
    Method RecordingPlay
    */
    inline int RecordingPlay(const QString& CmdStr);

    /*
    Method RecordingStart
    */
    inline int RecordingStart(const QString& CmdStr, int __MIDL__IPxserver0000);

    /*
    Method RecordingStop
    */
    inline int RecordingStop();

    /*
    Method RecordingSuspend
    */
    inline int RecordingSuspend(int __MIDL__IPxserver0001);

    /*
    Method SetBlob
    */
    inline int SetBlob(const QString& VariableString, QString& BlobData);

    /*
    Method SetValue
    */
    inline int SetValue(const QString& VariableString, const QString& ValueString);

    /*
    Method SetValue2
    */
    inline int SetValue2(const QString& VariableString, const QString& ValueString);

// meta object functions
    static const QMetaObject staticMetaObject;
    virtual const QMetaObject *metaObject() const { return &staticMetaObject; }
    virtual void *qt_metacast(const char *);
};

// Actual coclasses
class PXSERVER_EXPORT Document : public QAxObject
{
public:
    Document(QObject *parent = 0)
    : QAxObject(parent)
    {
        setControl(QStringLiteral("{568baa84-f6f1-11d1-a14b-444553540000}"));
    }

    Document(IPxserver *iface)
    : QAxObject()
    {
        initializeFrom(iface);
        delete iface;
    }

    /*
    Method DoAbort
    */
    inline int DoAbort(const QString& CmdStr);

    /*
    Method DoCmd2
    */
    inline int DoCmd2(const QString& CmdStr);

    /*
    Method DoCmd2Async
    */
    inline int DoCmd2Async(const QString& CmdStr);

    /*
    Method DoCommand
    */
    inline int DoCommand(const QString& CmdStr);

    /*
    Method DoCommandAsync
    */
    inline int DoCommandAsync(const QString& CmdStr);

    /*
    Method GetBlob
    */
    inline int GetBlob(const QString& VariableString, QString& BlobData);

    /*
    Method GetErrorDescription
    */
    inline QString GetErrorDescription(int lErrorNumber);

    /*
    Method GetErrorDescription2
    */
    inline QString GetErrorDescription2(int lErrorNumber);

    /*
    Method GetLastError
    */
    inline int GetLastError(const QString& Product);

    /*
    Method GetLastError2
    */
    inline int GetLastError2(const QString& Product);

    /*
    Method GetLastErrorMessage
    */
    inline QString GetLastErrorMessage(const QString& Product);

    /*
    Method GetValue
    */
    inline QString GetValue(const QString& VariableString);

    /*
    Method GetValue2
    */
    inline QString GetValue2(const QString& VariableString);

    /*
    Method IsBusy
    */
    inline int IsBusy(const QString& Product);

    /*
    Method IsReady
    */
    inline int IsReady(const QString& Product);

    /*
    Method RecordingInsertBreakpoint
    */
    inline int RecordingInsertBreakpoint(const QString& CmdStr);

    /*
    Method RecordingInsertComment
    */
    inline int RecordingInsertComment(const QString& CmdStr);

    /*
    Method RecordingPlay
    */
    inline int RecordingPlay(const QString& CmdStr);

    /*
    Method RecordingStart
    */
    inline int RecordingStart(const QString& CmdStr, int __MIDL__IPxserver0000);

    /*
    Method RecordingStop
    */
    inline int RecordingStop();

    /*
    Method RecordingSuspend
    */
    inline int RecordingSuspend(int __MIDL__IPxserver0001);

    /*
    Method SetBlob
    */
    inline int SetBlob(const QString& VariableString, QString& BlobData);

    /*
    Method SetValue
    */
    inline int SetValue(const QString& VariableString, const QString& ValueString);

    /*
    Method SetValue2
    */
    inline int SetValue2(const QString& VariableString, const QString& ValueString);

// meta object functions
    static const QMetaObject staticMetaObject;
    virtual const QMetaObject *metaObject() const { return &staticMetaObject; }
    virtual void *qt_metacast(const char *);
};

// member function implementation
#ifndef QAX_DUMPCPP_PXSERVER_NOINLINES
inline int IPxserver::DoAbort(const QString& CmdStr)
{
    int qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&CmdStr};
    qt_metacall(QMetaObject::InvokeMetaMethod, 8, _a);
    return qax_result;
}

inline int IPxserver::DoCmd2(const QString& CmdStr)
{
    int qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&CmdStr};
    qt_metacall(QMetaObject::InvokeMetaMethod, 9, _a);
    return qax_result;
}

inline int IPxserver::DoCmd2Async(const QString& CmdStr)
{
    int qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&CmdStr};
    qt_metacall(QMetaObject::InvokeMetaMethod, 10, _a);
    return qax_result;
}

inline int IPxserver::DoCommand(const QString& CmdStr)
{
    int qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&CmdStr};
    qt_metacall(QMetaObject::InvokeMetaMethod, 11, _a);
    return qax_result;
}

inline int IPxserver::DoCommandAsync(const QString& CmdStr)
{
    int qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&CmdStr};
    qt_metacall(QMetaObject::InvokeMetaMethod, 12, _a);
    return qax_result;
}

inline int IPxserver::GetBlob(const QString& VariableString, QString& BlobData)
{
    int qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&VariableString, (void*)&BlobData};
    qt_metacall(QMetaObject::InvokeMetaMethod, 13, _a);
    return qax_result;
}

inline QString IPxserver::GetErrorDescription(int lErrorNumber)
{
    QString qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&lErrorNumber};
    qt_metacall(QMetaObject::InvokeMetaMethod, 14, _a);
    return qax_result;
}

inline QString IPxserver::GetErrorDescription2(int lErrorNumber)
{
    QString qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&lErrorNumber};
    qt_metacall(QMetaObject::InvokeMetaMethod, 15, _a);
    return qax_result;
}

inline int IPxserver::GetLastError(const QString& Product)
{
    int qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&Product};
    qt_metacall(QMetaObject::InvokeMetaMethod, 16, _a);
    return qax_result;
}

inline int IPxserver::GetLastError2(const QString& Product)
{
    int qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&Product};
    qt_metacall(QMetaObject::InvokeMetaMethod, 17, _a);
    return qax_result;
}

inline QString IPxserver::GetLastErrorMessage(const QString& Product)
{
    QString qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&Product};
    qt_metacall(QMetaObject::InvokeMetaMethod, 18, _a);
    return qax_result;
}

inline QString IPxserver::GetValue(const QString& VariableString)
{
    QString qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&VariableString};
    qt_metacall(QMetaObject::InvokeMetaMethod, 19, _a);
    return qax_result;
}

inline QString IPxserver::GetValue2(const QString& VariableString)
{
    QString qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&VariableString};
    qt_metacall(QMetaObject::InvokeMetaMethod, 20, _a);
    return qax_result;
}

inline int IPxserver::IsBusy(const QString& Product)
{
    int qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&Product};
    qt_metacall(QMetaObject::InvokeMetaMethod, 21, _a);
    return qax_result;
}

inline int IPxserver::IsReady(const QString& Product)
{
    int qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&Product};
    qt_metacall(QMetaObject::InvokeMetaMethod, 22, _a);
    return qax_result;
}

inline int IPxserver::RecordingInsertBreakpoint(const QString& CmdStr)
{
    int qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&CmdStr};
    qt_metacall(QMetaObject::InvokeMetaMethod, 23, _a);
    return qax_result;
}

inline int IPxserver::RecordingInsertComment(const QString& CmdStr)
{
    int qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&CmdStr};
    qt_metacall(QMetaObject::InvokeMetaMethod, 24, _a);
    return qax_result;
}

inline int IPxserver::RecordingPlay(const QString& CmdStr)
{
    int qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&CmdStr};
    qt_metacall(QMetaObject::InvokeMetaMethod, 25, _a);
    return qax_result;
}

inline int IPxserver::RecordingStart(const QString& CmdStr, int __MIDL__IPxserver0000)
{
    int qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&CmdStr, (void*)&__MIDL__IPxserver0000};
    qt_metacall(QMetaObject::InvokeMetaMethod, 26, _a);
    return qax_result;
}

inline int IPxserver::RecordingStop()
{
    int qax_result;
    void *_a[] = {(void*)&qax_result};
    qt_metacall(QMetaObject::InvokeMetaMethod, 27, _a);
    return qax_result;
}

inline int IPxserver::RecordingSuspend(int __MIDL__IPxserver0001)
{
    int qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&__MIDL__IPxserver0001};
    qt_metacall(QMetaObject::InvokeMetaMethod, 28, _a);
    return qax_result;
}

inline int IPxserver::SetBlob(const QString& VariableString, QString& BlobData)
{
    int qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&VariableString, (void*)&BlobData};
    qt_metacall(QMetaObject::InvokeMetaMethod, 29, _a);
    return qax_result;
}

inline int IPxserver::SetValue(const QString& VariableString, const QString& ValueString)
{
    int qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&VariableString, (void*)&ValueString};
    qt_metacall(QMetaObject::InvokeMetaMethod, 30, _a);
    return qax_result;
}

inline int IPxserver::SetValue2(const QString& VariableString, const QString& ValueString)
{
    int qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&VariableString, (void*)&ValueString};
    qt_metacall(QMetaObject::InvokeMetaMethod, 31, _a);
    return qax_result;
}


inline int Document::DoAbort(const QString& CmdStr)
{
    int qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&CmdStr};
    qt_metacall(QMetaObject::InvokeMetaMethod, 8, _a);
    return qax_result;
}

inline int Document::DoCmd2(const QString& CmdStr)
{
    int qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&CmdStr};
    qt_metacall(QMetaObject::InvokeMetaMethod, 9, _a);
    return qax_result;
}

inline int Document::DoCmd2Async(const QString& CmdStr)
{
    int qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&CmdStr};
    qt_metacall(QMetaObject::InvokeMetaMethod, 10, _a);
    return qax_result;
}

inline int Document::DoCommand(const QString& CmdStr)
{
    int qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&CmdStr};
    qt_metacall(QMetaObject::InvokeMetaMethod, 11, _a);
    return qax_result;
}

inline int Document::DoCommandAsync(const QString& CmdStr)
{
    int qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&CmdStr};
    qt_metacall(QMetaObject::InvokeMetaMethod, 12, _a);
    return qax_result;
}

inline int Document::GetBlob(const QString& VariableString, QString& BlobData)
{
    int qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&VariableString, (void*)&BlobData};
    qt_metacall(QMetaObject::InvokeMetaMethod, 13, _a);
    return qax_result;
}

inline QString Document::GetErrorDescription(int lErrorNumber)
{
    QString qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&lErrorNumber};
    qt_metacall(QMetaObject::InvokeMetaMethod, 14, _a);
    return qax_result;
}

inline QString Document::GetErrorDescription2(int lErrorNumber)
{
    QString qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&lErrorNumber};
    qt_metacall(QMetaObject::InvokeMetaMethod, 15, _a);
    return qax_result;
}

inline int Document::GetLastError(const QString& Product)
{
    int qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&Product};
    qt_metacall(QMetaObject::InvokeMetaMethod, 16, _a);
    return qax_result;
}

inline int Document::GetLastError2(const QString& Product)
{
    int qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&Product};
    qt_metacall(QMetaObject::InvokeMetaMethod, 17, _a);
    return qax_result;
}

inline QString Document::GetLastErrorMessage(const QString& Product)
{
    QString qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&Product};
    qt_metacall(QMetaObject::InvokeMetaMethod, 18, _a);
    return qax_result;
}

inline QString Document::GetValue(const QString& VariableString)
{
    QString qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&VariableString};
    qt_metacall(QMetaObject::InvokeMetaMethod, 19, _a);
    return qax_result;
}

inline QString Document::GetValue2(const QString& VariableString)
{
    QString qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&VariableString};
    qt_metacall(QMetaObject::InvokeMetaMethod, 20, _a);
    return qax_result;
}

inline int Document::IsBusy(const QString& Product)
{
    int qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&Product};
    qt_metacall(QMetaObject::InvokeMetaMethod, 21, _a);
    return qax_result;
}

inline int Document::IsReady(const QString& Product)
{
    int qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&Product};
    qt_metacall(QMetaObject::InvokeMetaMethod, 22, _a);
    return qax_result;
}

inline int Document::RecordingInsertBreakpoint(const QString& CmdStr)
{
    int qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&CmdStr};
    qt_metacall(QMetaObject::InvokeMetaMethod, 23, _a);
    return qax_result;
}

inline int Document::RecordingInsertComment(const QString& CmdStr)
{
    int qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&CmdStr};
    qt_metacall(QMetaObject::InvokeMetaMethod, 24, _a);
    return qax_result;
}

inline int Document::RecordingPlay(const QString& CmdStr)
{
    int qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&CmdStr};
    qt_metacall(QMetaObject::InvokeMetaMethod, 25, _a);
    return qax_result;
}

inline int Document::RecordingStart(const QString& CmdStr, int __MIDL__IPxserver0000)
{
    int qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&CmdStr, (void*)&__MIDL__IPxserver0000};
    qt_metacall(QMetaObject::InvokeMetaMethod, 26, _a);
    return qax_result;
}

inline int Document::RecordingStop()
{
    int qax_result;
    void *_a[] = {(void*)&qax_result};
    qt_metacall(QMetaObject::InvokeMetaMethod, 27, _a);
    return qax_result;
}

inline int Document::RecordingSuspend(int __MIDL__IPxserver0001)
{
    int qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&__MIDL__IPxserver0001};
    qt_metacall(QMetaObject::InvokeMetaMethod, 28, _a);
    return qax_result;
}

inline int Document::SetBlob(const QString& VariableString, QString& BlobData)
{
    int qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&VariableString, (void*)&BlobData};
    qt_metacall(QMetaObject::InvokeMetaMethod, 29, _a);
    return qax_result;
}

inline int Document::SetValue(const QString& VariableString, const QString& ValueString)
{
    int qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&VariableString, (void*)&ValueString};
    qt_metacall(QMetaObject::InvokeMetaMethod, 30, _a);
    return qax_result;
}

inline int Document::SetValue2(const QString& VariableString, const QString& ValueString)
{
    int qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&VariableString, (void*)&ValueString};
    qt_metacall(QMetaObject::InvokeMetaMethod, 31, _a);
    return qax_result;
}



#endif

}

QT_BEGIN_NAMESPACE

namespace QtMetaTypePrivate {
template<>
struct QMetaTypeFunctionHelper<Pxserver::IPxserver, /* Accepted */ true> {
    static void Destruct(void *t)
    {
        Q_UNUSED(t)
        static_cast<Pxserver::IPxserver*>(t)->Pxserver::IPxserver::~IPxserver();
    }
    static void *Construct(void *where, const void *t)
    {
        Q_ASSERT(!t);
        Q_UNUSED(t)
        return new (where) Pxserver::IPxserver;
    }
#ifndef QT_NO_DATASTREAM
    static void Save(QDataStream &stream, const void *t) { stream << *static_cast<const Pxserver::IPxserver*>(t); }
    static void Load(QDataStream &stream, void *t) { stream >> *static_cast<Pxserver::IPxserver*>(t); }
#endif // QT_NO_DATASTREAM
};

template<>
struct QMetaTypeFunctionHelper<Pxserver::Document, /* Accepted */ true> {
    static void Destruct(void *t)
    {
        Q_UNUSED(t)
        static_cast<Pxserver::Document*>(t)->Pxserver::Document::~Document();
    }
    static void *Construct(void *where, const void *t)
    {
        Q_ASSERT(!t);
        Q_UNUSED(t)
        return new (where) Pxserver::Document;
    }
#ifndef QT_NO_DATASTREAM
    static void Save(QDataStream &stream, const void *t) { stream << *static_cast<const Pxserver::Document*>(t); }
    static void Load(QDataStream &stream, void *t) { stream >> *static_cast<Pxserver::Document*>(t); }
#endif // QT_NO_DATASTREAM
};

} // namespace QtMetaTypePrivate
QT_END_NAMESPACE

#endif

