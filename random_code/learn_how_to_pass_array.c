#include <stdio.h>

void print_array(int foo[], int length);

void print_array(int foo[], int length){
    printf ("\nTrying to print array\n");

    for (int i=0; i<length; i++){
        printf ("%d \t",foo[i]);
    }
}

int main() {
    printf ("Creating an array..");
    int fooArray[] = {1,2,3,4,5};

    print_array(fooArray,5);

    fooArray[6]=10;

    print_array(fooArray,6);


}