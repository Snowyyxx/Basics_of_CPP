#include<iostream>
using namespace std;

class Employee{
  
    public:  
    string name;
    int salary;
    Employee(string i_name,int i_salary):salary(i_salary),name(i_name){};
    void put_emp_details(){
        cout<<"Name"<<name<<endl<<"Salary:"<<salary<<endl;
    }

};

class clg_grad:private Employee{
    public:
    string clg_name;
    clg_grad(string i_clg_name,string i_name,int i_salary):clg_name(i_clg_name),Employee(i_name,i_salary){};
    void put_clg_details(){
        Employee::put_emp_details();
        cout<<endl;
        cout<<"College Degree"<<clg_name;    
    }
};

int main()
{
    clg_grad c1("Thapar","Aditya",10000);
    c1.put_clg_details();
}