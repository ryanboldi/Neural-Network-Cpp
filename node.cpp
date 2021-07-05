#include "node.h"

//default constructor
Node::Node() {};

Node::Node(int v): mValue(v) {}

int Node::getValue(){
    return mValue;
}

void Node::setValue(int v){
    mValue = v;
}