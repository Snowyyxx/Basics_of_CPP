#include<iostream>
using namespace std;

class Noodles{

    char color[100];
    int price;

    public:
    void set_noodles(){
        cout<<endl<<"Colour:";
        cin>>color;
        cout<<endl<<"price:";
        cin>>price;
        cout<<endl;
    }

    void display_noodles(){
        cout<<endl<<color<<'\t'<<"Rs"<<price;
    }

};

class Maggie:public Noodles{

    char serving_size[100];
    public: 
    void set_maggie(){
        set_noodles();
        cout<<"Serving size:";
        cin>>serving_size;
    }

    void display_maggie(){
        display_noodles();
        cout<<"serving size";
        cout<<endl<<serving_size;
    }

};



int main (){

    Maggie m1;
    m1.set_maggie();
    m1.display_maggie();

}