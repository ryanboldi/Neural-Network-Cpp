#ifndef NODE_H
#define NODE_H

#include <functional>

class Node {
    private:
        double mValue;

    public:
        Node();
        Node(double v);
        double getValue();
        void setValue(double v);

        void incValue(double num);

        void activate();
};

#endif