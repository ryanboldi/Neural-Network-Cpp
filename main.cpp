#include <iostream>

#include "node.h"
#include "connection.h"
#include "network.h"

using namespace std;

int main(){
    Network n(2, 2, 2);
    cout << n << endl;
    n.Connect(0, 3, 5);
    n.Connect(0, 2, 2);
    n.Connect(2, 3, 6);
    cout << n << endl;
    n.setNodeValue(0, 1);
    n.setNodeValue(1, 3);
    n.setNodeValue(2, 0);
    cout << n << endl;
    n.feedForward();
    cout << n << endl;
    n.feedForward();
    cout << n << endl;
    n.feedForward();
    cout << n << endl;
    n.feedForward();
    cout << n << endl;
    n.feedForward();
    cout << n << endl;

}
