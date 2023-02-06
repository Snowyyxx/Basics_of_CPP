#include<iostream>
using namespace std;

class person{
 
public:
    int age;
    int roll_no;
    string name;
    void print_roll_no();
    void print_details(){
        cout<<"age of person:"<<age<<"\n";
        cout<<"name of person:"<<name;
    };
};

void person::print_roll_no(){
    cout<<"rollNo:"<<roll_no<<"\n";
}


int main () {
    person p1;// p1 -> object
    p1.name="aditya";
    p1.roll_no=102217233;
    p1.age=18;
    p1.print_roll_no();
    p1.print_details(); 
}