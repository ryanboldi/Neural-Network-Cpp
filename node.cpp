#include "node.h"

//default constructor
Node::Node() {};

Node::Node(double v): mValue(v) {

}

double Node::getValue(){
    return mValue;
}

void Node::setValue(double v){
    mValue = v;
}

void Node::incValue(double num){
    mValue += num;
}