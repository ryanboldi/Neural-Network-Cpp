#ifndef CONNECTION_H
#define CONNECTION_H

#include <iostream>
using namespace std;

#include "node.h"

class Connection{
    private:
        float mWeight;
        Node *mFrom;
        Node *mTo;
    
    public:
        Connection(); 
        Connection(Node* f, Node* t, float w);

        float getWeight();
        void setWeight(float w);

        void feedForward();

        friend ostream& operator<<(ostream& os, const Connection& con);
};

#endif