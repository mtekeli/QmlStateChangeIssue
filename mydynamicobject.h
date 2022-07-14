#ifndef MYDYNAMICOBJECT_H
#define MYDYNAMICOBJECT_H

#include <QObject>

class MyDynamicObject : public QObject
{
	Q_OBJECT

	Q_PROPERTY(QString testValue READ testValue CONSTANT)
public:
	explicit MyDynamicObject(QObject* parent = nullptr);

	QString testValue() const { return "hello from my dynamic object"; }

signals:
};

#endif // MYDYNAMICOBJECT_H
