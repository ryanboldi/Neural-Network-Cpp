#ifndef CONNECTION_H
#define CONNECTION_H

#include <iostream>
using namespace std;

#include "node.h"

class Connection{
    private:
        double mWeight; //weight of connection
        double mCache; // cache of current from.value * weight
        Node *mFrom; //address of the nodes
        Node *mTo;
    
    public:
        Connection(); 
        Connection(Node* f, Node* t, double w);

        ~Connection();

        double getWeight();
        void setWeight(double w);

        double getCache();

        void cacheResult();
        void feedForward();

        friend ostream& operator<<(ostream& os, const Connection& con);
};

#endif