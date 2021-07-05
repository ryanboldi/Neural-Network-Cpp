#include "connection.h"

Connection::Connection() {
    mWeight = 420;
}

Connection::Connection(float w) : mWeight(w) {

}

float Connection::getWeight(){
    return mWeight;
}

void Connection::setWeight(float w){
    mWeight = w;
}