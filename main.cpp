#include <iostream>

#include "node.h"
#include "connection.h"
#include "network.h"

#include <iterator>

using namespace std;

int XOR(int a, int b);

int main(){
    Network n(2, 5, 2);
    cout << n << endl;

    n.fullyConnect();

    cout << n << endl;

    auto result = n.feedForward({0.2, 1.7});
    std::copy(result.begin(), result.end(), std::ostream_iterator<double>(std::cout, " "));

    cout << n << endl;

    n.feedForward({0.2, 1.7});
    
    result = n.feedForward({0.2, 1.7});
    std::copy(result.begin(), result.end(), std::ostream_iterator<double>(std::cout, " "));

    n.feedForward({0.2, 1.7});

    cout << "XOR(0, 0) = " << XOR(0, 0);
    cout << "XOR(0, 1) = " << XOR(0, 1);
    cout << "XOR(1, 0) = " << XOR(1, 0);
    cout << "XOR(1, 1) = " << XOR(1, 1);
}


int XOR(int a, int b){
    if (a == b) {
        return false;
    }
    return true;
}