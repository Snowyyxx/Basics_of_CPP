#include<iostream>
using namespace std;

class quadratic_equation{
    public:
        int a,b,c,root_1,root_2;
        quadratic_equation();
        void print_roots(int a,int b ,int c,int* root_1,int* root_2);
};

quadratic_equation::quadratic_equation(){
    cout<<"Coefficients of QE: ";
    cin>>a;
    cin>>b;
    cin>>c;

}
void quadratic_equation::print_roots(int a,int b ,int c,int* root_1,int* root_2){
    int D;
    D= b*b - 4*a*c;
    *root_1= (-b+D)/2*a;
    *root_2 = (-b-D)/2*a;
    cout<< "Roots of the QE:";
    cout << *root_1;
    cout << *root_2;
}


int main(){
   quadratic_equation q1;
   q1.print_roots(q1.a,q1.b,q1.c,&q1.root_1,&q1.root_2);
}