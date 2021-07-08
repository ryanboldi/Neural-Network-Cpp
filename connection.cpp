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

void Connection::setFrom(Node* n){
    mFrom = n;
}

void Connection::setTo(Node* n){
    mTo = n;
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

const int Connection::getFromID() const {
    return mFrom->getId();
}

const int Connection::getToID() const {
    return mTo->getId();
}


//overload << operator so that we can cout << connection;
ostream& operator<<(ostream& os, const Connection& con){
    os << con.mFrom->getId() << " ("<< con.mFrom->getValue() << ") --(" << con.mWeight << ")-> " << con.mTo->getId() << " (" << con.mTo->getValue() << ")" << endl;
    return os;
}