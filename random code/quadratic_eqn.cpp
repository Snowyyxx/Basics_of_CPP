#include<stdio.h>
#include<math.h>

struct quad_eqn {
    float coeff_a;
    float coeff_b;
    float coeff_c;
    //ax^2+bx+c =0]]
};

int quadratic_solve(struct quad_eqn equation);

int main () {
    float a=1,b=2,c=3;

    struct quad_eqn q1 = {a,b,c};

    quadratic_solve(q1);
}

int quadratic_solve(struct quad_eqn equation){
    float x1,x2,a,b,c,D;
    double Root_D;
    a = equation.coeff_a;
    b = equation.coeff_b;
    c = equation.coeff_c;
    D = (b*b)-(4*a*c);
    Root_D = sqrt(D);
    x1 = (-b + Root_D)/(2*a);
    x2 = (-b - Root_D)/(2*a);
    printf("Roots of the Given Quadratic are:%f",x1);
    printf(" and %f",x2);
}