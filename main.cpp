#include <iostream>

#include "node.h"
#include "connection.h"
#include "network.h"

#include <iterator>

using namespace std;

int XOR(int a, int b);
double eval(Network n);
double getError(Network n, std::vector<double> inputs, std::vector<double> expOutputs);

int main(){
    //Network n(2, 1, 1);
    //cout << n << endl;

    //n.fullyConnect();

    //cout << eval(n);

    //test copy constructor
    Network n(2, 1, 1);
    n.fullyConnect();
    cout << n << endl;

    Network n1(n);
    
    cout << "n1: " << endl << n1 << endl;

    n1.Connect(0, 2, 69);
    cout << n1 << endl;

    n1.feedForward({3, 1});
    n.feedForward({3, 1});

    cout << "made it past feed forward alive" << endl;

    cout << n << endl;
    cout << n1 << endl;

    //cout << n << endl;

    //auto result = n.feedForward({0.2, 1.7});
    //std::copy(result.begin(), result.end(), std::ostream_iterator<double>(std::cout, " "));

    //cout << "XOR(0, 0) = " << XOR(0, 0);
    //cout << "XOR(0, 1) = " << XOR(0, 1);
    //cout << "XOR(1, 0) = " << XOR(1, 0);
    //cout << "XOR(1, 1) = " << XOR(1, 1);
}

double eval(Network n){
    double totalError = 0;
    totalError+=getError(n, {0,0}, {0});
    totalError+=getError(n, {0,1}, {1});
    totalError+=getError(n, {1,0}, {1});
    totalError+=getError(n, {1,1}, {0});

    return totalError;
}

double getError(Network n, std::vector<double> inputs, std::vector<double> expOutputs){
    double error = 0;
    
    for (int i = 0; i < 5; i++){
        n.feedForward(inputs);
    }
    
    std::vector<double> outputs = n.feedForward(inputs);

    for (int i=0; i < expOutputs.size() ; i++){
        error += outputs[i] - expOutputs[i];
    }

    return error;
}

int XOR(int a, int b){
    if (a == b) {
        return false;
    }
    return true;
}