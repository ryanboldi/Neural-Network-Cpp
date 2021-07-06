#include "network.h"

#include <vector>
#include "node.h"

using namespace std;

Network::Network () : Network::Network(1, 1, 1) {}

//initializes nodes in the network, no connections yet
Network::Network (int inp, int hid, int out){
    mInputs = inp;
    mHidden = hid;
    mOutputs = out;

    for (int i = 0; i < inp + hid + out; i++){
        mNodes.push_back(Node(i));
    }
}

Network::~Network(){

}

int Network::getNumNodes (){
    return mNodes.size();
}

int Network::getNumConnections(){
    return mConnections.size();
}

Node Network::getNodeAt(int index){
    return mNodes.at(index);
}

void Network::setNodeValue(int index, double v){
    mNodes[index].setValue(v);
}

Connection Network::getConnectionAt(int index){
    return mConnections.at(index);
}

void Network::Connect(int index1, int index2, double w){
    mConnections.push_back(Connection(&mNodes[index1], &mNodes[index2], w));
}

void Network::feedForward(std::vector<double> inputs){
    for (int i = 0; i < mInputs; i++){
        mNodes[i].setValue(inputs[i]);
    }

    int length = mConnections.size();

    for (int i = 0; i < length; i ++){
        mConnections[i].cacheResult();
    }

    for (int i = 0; i < length; i++){
        mConnections[i].feedForward();
    }

    for (int i = 0; i < mNodes.size(); i++){
        mNodes[i].activate();
    }
}


//connects every input to every hidden, and every hidden to every output.
void Network::fullyConnect(){
    for (int i = 0; i < mInputs; i++){
        for (int j = mInputs; j < mHidden + mInputs; j++){
            Connect(i, j, 1.0);
            for (int k = mInputs + mHidden; k < mOutputs + mInputs + mHidden; k++){
            Connect(j, k, 1.0);
            }
        }
    }
}

//overload << operator so that we can cout << network;
ostream& operator<<(ostream& os,  Network& net){
    os << "Nodes: ";
    for (int i = 0; i < net.getNumNodes(); i++){
        os << net.getNodeAt(i).getId() << ", ";
    }
    os << endl << "Connections: " << endl;
    for (int i = 0; i < net.getNumConnections(); i++){
        os << net.getConnectionAt(i) << endl;
    }
    return os;
}