#ifndef NETWORK_H
#define NETWORK_H

#include <vector>

#include "node.h"
#include "connection.h"

class Network{
    private:
        std::vector<Node> mNodes;
        std::vector<Connection> mConnections;

        int mInputs;
        int mHidden;
        int mOutputs;
    
    public:
        Network();
        ~Network();
        Network(int inp, int hid, int out);

        int getNumNodes();
        int getNumConnections();

        Node getNodeAt(int index);
        void setNodeValue(int index, double v);

        Connection getConnectionAt(int index);

        void Connect(int index1, int index2, double w);

        void feedForward(std::vector<double> inputs);

        void fullyConnect();
        

    friend ostream& operator<<(ostream& os, Network& net);
};


#endif