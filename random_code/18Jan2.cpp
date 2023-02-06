#include<iostream>
using namespace std;

class shape{
    public:
    virtual void draw() =0;
};

class circle: public shape{
    public:
    void draw(){
        cout<<"Circle";
    }
};

class square: public shape{
    public:
    void draw(){
        cout<<"square";
    }
};


int main()
{
    shape* ptr = new square;
    ptr->draw();
}