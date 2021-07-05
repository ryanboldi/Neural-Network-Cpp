#include <iostream>

#include "node.h"
#include "connection.h"
#include "network.h"

using namespace std;

int main(){
    Node n(0, 0.1);
    Node n1(1);

    Connection c(&n, &n1, 2);
    cout << c << endl;

    c.feedForward();

    cout << c << endl;
}