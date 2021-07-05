#include "node.h"

//default constructor
Node::Node() {};

Node::Node(float v): mValue(v) {}

float Node::getValue(){
    return mValue;
}

void Node::setValue(float v){
    mValue = v;
}

void Node::incValue(float num){
    mValue += num;
}