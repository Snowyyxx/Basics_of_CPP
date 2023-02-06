#include<stdio.h>

int modulus_complex(struct complex_num*);

struct complex_num{
    int real_part;
    int complex_part;
};

int main () {
    struct complex_num num1;
    struct complex_num *ptr;
    ptr = &num1;
    modulus_complex(ptr);
}

int modulus_complex(struct complex_num*pointer){
    int x,y,mod_z;
    x = pointer->real_part;
    y = pointer->complex_part;
    mod_z = (x^2+y^2)^1/2;
    printf("%d \n",mod_z);
}