#include "myobject.h"
#include "QtQml/qqml.h"
#include "mydynamicobject.h"

#include <QTimer>

MyObject::MyObject(QObject* parent) : QObject{parent}
{
	qmlRegisterUncreatableType<MyDynamicObject>("stateChangeTest", 1, 0, "MyDynamicObject",
	                                            "this is an uncreatable type");
	QTimer::singleShot(3000, this,
	                   [this]()
	                   {
		                   _myDynamicObject = new MyDynamicObject{this};
		                   emit myDynamicObjectChanged();
		                   qDebug() << "you see the change?";
	                   });
}
