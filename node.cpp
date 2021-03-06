#include "node.h"
#include <math.h>

//default constructor
Node::Node(int Id) : mID(Id), mValue(0) {}

Node::Node(int Id, double v): mValue(v), mID(Id) {

}

Node::~Node() {}

double Node::getValue(){
    return mValue;
}

void Node::setValue(double v){
    mValue = v;
}

int Node::getId(){
    return mID;
}

void Node::incValue(double num){
    mValue += num;
}

void Node::activate(){
    //logisitc sigmoid
    mValue = 1 / (1 + exp(-mValue));
}