#include<stdio.h>
int print_array(struct student structure);

struct student {

    int roll_no;
    float cgpa;
    char name[100];

};

int main () {
    struct student s1 = {1,9.5,"aditya"};
    struct student *ptr;
    ptr = &s1; // ptr = &a;
    printf("roll no:%d \n",ptr->roll_no);
    print_array(s1);
}

int print_array(struct student structure){
    printf("RollNo:%d \n",structure.roll_no);
    printf("CGPA:%f \n",structure.cgpa);
    printf("Name %s \n",structure.name);
}