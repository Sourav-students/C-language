#include<stdio.h>
#include<conio.h>

int main(){

    float principal,rate,time,intrest;
    printf("enter the principal amount\n> rate\n >time period\n");

    scanf("%f%f%f",&principal,&rate,&time);

    //simple intrest = P*R*T/100
    intrest=(principal*rate*time)/100;

    printf("simple intrest is %.2f\n",intrest);

    return 0;
}