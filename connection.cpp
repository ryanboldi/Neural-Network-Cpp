#include "connection.h"
#include <iostream>

using namespace std;

Connection::Connection(Node* f, Node* t, float w) : mWeight(w), mFrom(f), mTo(t) {
    //put all connection logic
}

//default connection weight of 99
Connection::Connection() {

}

float Connection::getWeight(){
    return mWeight;
}

void Connection::setWeight(float w){
    mWeight = w;
}

ostream& operator<<(ostream& os, const Connection& con){
    os << con.mFrom->getValue() << " --(" << con.mWeight << ")-> " << con.mTo->getValue() << endl;
    return os;
}