#ifndef NODE_H
#define NODE_H

class Node {
    private:
        const int mID;
        double mValue;

    public:
        Node(int Id);
        Node(int Id, double v);

        double getValue();
        void setValue(double v);

        int getId();

        void incValue(double num);

        void activate();
};

#endif