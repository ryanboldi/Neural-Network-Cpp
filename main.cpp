#include <iostream>

#include "node.h"
#include "connection.h"
#include "network.h"

using namespace std;

int main(){
    Node n(0, 0.1);
    Node n1(1, 3);

    Connection c(&n, &n1, 2);
    Connection c1(&n1, &n, 4);

    cout << c << endl;
    cout << c1 << endl;

    c.cacheResult();
    c1.cacheResult();

    c.feedForward();
    c1.feedForward();

    cout << c << endl;
    cout << c1 << endl;
}