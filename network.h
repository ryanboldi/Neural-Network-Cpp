#ifndef NETWORK_H
#define NETWORK_H

#include <vector>

#include "node.h"
#include "connection.h"

class Network{
    private:
        Node* Nodes;
        Connection* Connections;
    
    public:
        Network();
        Network(std::vector<int> layers);
};


#endif