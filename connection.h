#ifndef CONNECTION_H
#define CONNECTION_H

class Connection{
    private:
        float mWeight;
    
    public:
        Connection(); //generate randomly
        Connection(float w);

        float getWeight();
        void setWeight(float w);
};

#endif