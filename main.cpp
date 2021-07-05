#include <iostream>

#include "node.h"
#include "connection.h"

using namespace std;

int main(){
    Node n;
    Node n1;

    Connection c(&n, &n1, 2.0);
    cout << c << endl;
}