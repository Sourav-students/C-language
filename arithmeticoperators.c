//Write a program to demonstrate arithmetic operators.
#include<stdio.h>

int main ()
//Arthematic operators
{
    int a,b,multi,Add,Sub,mod;
    float Div;

printf("Enter the two value");
scanf("%d%d",&a,&b);
multi=a*b;
printf("Result of multi is %d\n",multi);

Add=a+b;
printf("result of Add is %d\n",Add);

Sub=a-b;
printf("result of Sub is %d\n",Sub);

mod=a%b;
printf("result of mod is %d\n",mod);

Div=a/b;
printf("result of Div is %f\n",Div);
return 0;
}
