#include<stdio.h>

int main(){
    printf("Name: Aditya Jain, Application Number:3112 \n");
    float cost_price,repair_price,selling_price,gain,gain_perc;
    printf("Price of old scooter:");
    scanf("%f",&cost_price);
    printf("Repair amount:");
    scanf("%f",&repair_price);
    printf("Enter Selling Price:");
    scanf("%f",&selling_price);
    gain = selling_price-cost_price-repair_price;
    gain_perc=(gain/(cost_price+repair_price))*100;
    printf("Gain percentage:%f",gain_perc);
}