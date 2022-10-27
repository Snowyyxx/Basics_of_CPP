#include<stdio.h>
int print_array(struct student s1);

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

int print_array(struct student s1){
    printf("RollNo:%d \n",s1.roll_no);
    printf("CGPA:%f \n",s1.cgpa);
    printf("Name %s \n",s1.name);
}