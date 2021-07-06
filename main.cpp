#include <iostream>

#include "node.h"
#include "connection.h"
#include "network.h"

using namespace std;

int main(){
    Network n(2, 5, 2);
    cout << n << endl;

    n.fullyConnect();

    cout << n << endl;

    n.feedForward({0.2, 1.7});

    cout << n << endl;

    n.feedForward({0.2, 1.7});
    cout << n << endl;

    n.feedForward({0.2, 1.7});
    
}
