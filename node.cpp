#include "node.h"

//default constructor
Node::Node(int v): mValue(v) {
    //will do some connection work here
}

int Node::getValue(){
    return mValue;
}

void Node::setValue(int v){
    mValue = v;
}