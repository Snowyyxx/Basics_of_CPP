#include<iostream>
using namespace std;

class Student{
    public:
    int age;
    string name;
    Student(int i_age,string i_name):age(i_age),name(i_name){};
    void print_details();
};

void Student::print_details(){
    cout<<"Name"<<name<<endl<<"Age"<<age;
}

int main()
{
Student s1(19,"aditya");
s1.print_details();
    
}