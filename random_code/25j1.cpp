#include<iostream>
using namespace std;

class student{
    public:
    int age;
    string name;

    void display(){
        cout<<name<<endl<<age;
    }

};

int main(){

    class student s1;
    s1.age =18;
    s1.name="adu";
    s1.display();


}