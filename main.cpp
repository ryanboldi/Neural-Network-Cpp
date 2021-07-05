#include <iostream>

#include "node.h"
#include "connection.h"

using namespace std;

int main(){
    Node n(2);
    Node n1(0);

    Connection c(&n, &n1, 2.0);
    cout << c << endl;

    c.feedForward();
    cout << c << endl;
}