#include<stdio.h>

int main (){

    float radius,area,pie;
    pie=3.14;

    printf("enter the radius of circle");
    scanf("%f",&radius);

    //area of circle = pie*r^2

    area=pie*radius*radius;
    printf("area of circle%.6f\n",area);
    printf("area of circle%.6e\n",area);

    return 0;
}