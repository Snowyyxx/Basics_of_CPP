#include<iostream>
using namespace std;

class Shape{
    public:
    virtual void get_area()=0;
};
class Square:public Shape{
    private:
    int side;
    public:
    Square(int length):side(length){};
    void get_area(){
        cout<<"Area of square:"<<side*side<<endl;
        //Shape::get_area();
    }
};


int main()
{

    Shape * ptr = new Square(10);
    ptr->get_area();

}