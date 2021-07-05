#include "connection.h"
#include <iostream>

using namespace std;

Connection::Connection(Node* f, Node* t, float w) : mWeight(w), mFrom(f), mTo(t) {
    //put all connection logic
}

Connection::Connection() {

}

float Connection::getWeight(){
    return mWeight;
}

void Connection::setWeight(float w){
    mWeight = w;
}

//increments the value of mTo by the value of mFrom * connection weight
void Connection::feedForward(){
    mTo->incValue(mFrom->getValue() * mWeight);
}

//overload << operator so that we can cout << connection;
ostream& operator<<(ostream& os, const Connection& con){
    os << con.mFrom->getValue() << " --(" << con.mWeight << ")-> " << con.mTo->getValue() << endl;
    return os;
}