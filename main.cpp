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
    Network n(2, 1, 1);
    cout << n << endl;

    n.fullyConnect();

    cout << eval(n);

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