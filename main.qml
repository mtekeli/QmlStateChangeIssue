import QtQuick 2.15
import QtQuick.Window 2.15

Window {
    id: root
    
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")
    
    Item {
        id: internal
        states: [
            State {
                name: "valid_object"
                when: MyObject.myDynamicObject
                PropertyChanges {
                    target: root
                    title: MyObject.myDynamicObject.testValue            
                }
            }
        ]
    }
}
