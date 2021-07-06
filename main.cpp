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

    n.feedForward({56, 21});

    cout << n << endl;

    n.feedForward({56, 21});

    cout << n << endl;

    n.feedForward({56, 21});

    cout << n << endl;

    n.feedForward({56, 21});

    cout << n << endl;

    n.feedForward({56, 21});

    cout << n << endl;
}
