#include<iostream>
using namespace std;

class vehicle{
    public:
    int no_wheels,avg_speed;

    void get_vehicle()
    {
        cout<<"Wheels:"<<endl;
        cin>>no_wheels;
        cout<<"avg speed:"<<endl;
        cin>>avg_speed;
    };

    void display_vehicle(){
        /*cout<<"Wheels:"<<no_wheels<<endl;
        cout<<"Average Speed:"<<avg_speed<<endl; */
        cout<< "THIS IS FROM PARENT CLASS  ";
    };
};


class car: public vehicle{
    public:
    char color[10];
    int model;

    /*void get_car(){
        get_vehicle();
        cout<<"Color:";
        cin>>color;
    };*/
    /*void display_car(){
        get_vehicle();
        cout<<"Color of car:"<<color;
    };*/

    void display_vehicle(){
        cout<<"THIS IS FROM CAR CLASS"<<endl;;
        vehicle::display_vehicle();
    }


};




int main()
{
    car c1;
    //c1.get_vehicle();
    c1.display_vehicle();

}