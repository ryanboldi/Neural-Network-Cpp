#include "connection.h"
#include <iostream>

using namespace std;

Connection::Connection(Node* f, Node* t, double w) : mWeight(w), mFrom(f), mTo(t), mCache(0) {
    //put all connection logic
}

Connection::Connection() {
}

Connection::~Connection() {}

double Connection::getWeight(){
    return mWeight;
}

void Connection::setWeight(double w){
    mWeight = w;
}

double Connection::getCache(){
    return mCache;
}

void Connection::cacheResult(){
    mCache = mFrom->getValue() * mWeight;
}

//increments the value of mTo by the cache
void Connection::feedForward(){
    mTo->incValue(mCache);
}

//overload << operator so that we can cout << connection;
ostream& operator<<(ostream& os, const Connection& con){
    os << con.mFrom->getId() << " ("<< con.mFrom->getValue() << ") --(" << con.mWeight << ")-> " << con.mTo->getId() << " (" << con.mTo->getValue() << ")" << endl;
    return os;
}