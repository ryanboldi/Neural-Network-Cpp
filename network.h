#ifndef NETWORK_H
#define NETWORK_H

#include <vector>

#include "node.h"
#include "connection.h"

class Network{
    private:
        std::vector<Node> Nodes;
        std::vector<Connection> Connections;
    
    public:
        Network();
        Network(int inp, int hid, int out);
};


#endif