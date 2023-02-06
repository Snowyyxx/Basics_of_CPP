#include<iostream>
using namespace std;

class complex {
    public:
    int real,img;

    complex(int r=0,int i=0){ // default arguments also given just in case;
        real = r;
        img =i;
    }

    complex operator + (complex const &obj){ // crma this shit;
        complex result;
        result.real = real+obj.real;
        result.img = img+obj.img;
        return result;
    }
};


int main()
{
    complex c1(1,2);
    complex c2(1,2);
    complex c3 =c1+c2;
    cout<<"Img of complex:"<<c3.img<<endl;
    cout<<"Real of complex:"<<c3.real<<endl;
}