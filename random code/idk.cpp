#include<stdio.h>

struct vectors  {
    int i;
    int j;
    int k;
} ;

int add_vectors(struct vectors v1_ptr,struct vectors v2_ptr,struct vectors v3_ptr);

int main () {
    struct vectors v1 = {1,2,3};
    struct vectors v2 = {9,8,7};
    struct vectors v3 = {};
    struct vectors *v3_ptr;
    v3_ptr = &v3; 
    v3 = {add_vectors(v1,v2,v3)};
    printf("i-cap:%d \n",v3_ptr->i);
    printf("j-cap:%d \n",v3_ptr->j);
    printf("k-cap:%d \n",v3_ptr->k);
}

int add_vectors(struct vectors v1,struct vectors v2,struct vectors v3){
    int x_final,y_final,z_final;
    x_final = v1.i + v2.i;
    y_final = v1.j +v2.j;
    z_final = v1.k+ v2.k;
    return x_final,y_final,z_final;
}