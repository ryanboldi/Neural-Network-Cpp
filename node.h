#ifndef NODE_H
#define NODE_H

class Node {
    private:
        float mValue;

    public:
        Node();
        Node(float v);
        float getValue();
        void setValue(float v);

        void incValue(float num);
};

#endif