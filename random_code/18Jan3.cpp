#include<iostream>
using namespace std;

class Person{
    private:
    string name;
    int age;

    public:
    Person(string i_name,int i_age):name(i_name),age(i_age){};
    void display(){
        cout<<"Name:"<<name;
        cout<<"Age:"<<age;
    }
};


class Teacher : public Person{
    private:
    string subject;
    public:
    Teacher(string i_name,int i_age,string i_subject):Person(i_name,i_age),subject(i_subject){}
    void display(){
        Person::display();
        cout<<"subject:"<<subject<<endl;
    }
};


int main()
{
    Teacher t1("aditya",19,"CS");
    t1.display();
}