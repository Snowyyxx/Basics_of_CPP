#include<iostream>
using namespace std;

class square{
    public:
        int length,breadth;
        int area_sqr(int length,int breadth){
            cout << "Area of Square:" << length*breadth;
        }
            
};

int main(){

    square x;
    printf("length and breadth:");
    scanf("%d%d",&x.length,&x.breadth);
    x.area_sqr(x.length,x.breadth);



}