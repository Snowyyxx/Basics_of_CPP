#include<stdio.h>
//e^x expansion
int factorial (int num,int count);
int expansion(int n,int x,int count);


int main(){
// e^x = 1+x+x^2/2!+x^3/3!....
int n,x,count=0;

                    printf("Level of Accuracy in expasion:");
                    scanf("%d",&n);
                    printf("\n");
                    printf("Value of x:");
                    scanf("%d",&x);

int value = expansion(n,x,count);
printf("Ans:%d",value);

}

int expansion(int n,int x,int count){
    int dv=0;
    for(int i=0;i<n+1;i++){
        if(i ==0){
            dv = 1;
            }
        else {
            dv =dv + x^i/factorial(i,count);
        }
    }
    return dv;
}
int factorial(int num,int count){
    while(count<num+1){
        return num*factorial(num-1,count++);
        break;
    }
}

