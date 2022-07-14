#ifndef MYOBJECT_H
#define MYOBJECT_H

#include <QObject>

class MyDynamicObject;

class MyObject : public QObject
{
	Q_OBJECT

	Q_PROPERTY(MyDynamicObject* myDynamicObject READ myDynamicObject NOTIFY myDynamicObjectChanged)
public:
	explicit MyObject(QObject* parent = nullptr);

	MyDynamicObject* myDynamicObject() const { return _myDynamicObject; }

signals:
	void myDynamicObjectChanged();

private:
	MyDynamicObject* _myDynamicObject = nullptr;
};

#endif // MYOBJECT_H
