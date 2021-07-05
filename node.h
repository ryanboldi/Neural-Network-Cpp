#ifndef NODE_H
#define NODE_H

class Node {
    private:
        int mValue;

    public:
        Node(int v);
        int getValue();
        void setValue(int v);
};

#endif