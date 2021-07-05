#ifndef CONNECTION_H
#define CONNECTION_H

#include <iostream>
using namespace std;

#include "node.h"

class Connection{
    private:
        double mWeight;
        Node *mFrom;
        Node *mTo;
    
    public:
        Connection(); 
        Connection(Node* f, Node* t, double w);

        double getWeight();
        void setWeight(double w);

        void feedForward();

        friend ostream& operator<<(ostream& os, const Connection& con);
};

#endif