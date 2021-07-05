#include "network.h"

#include <vector>

Network::Network () : Network::Network(1, 1, 1) {}

Network::Network (int inp, int hid, int out){
    for (int i = 0; i < inp + hid + out; i++){
        break;
        //TODO: do something here to init an array of nodes.
    }
}