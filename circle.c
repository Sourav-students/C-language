#include<stdio.h>
//Area of circle
int main()
{
    int r,cir;
    float pie=3.14;

    printf("Enter the value of radius");
    scanf("%d\n",&r);


   cir=pie*r*r;
    printf("area of circle is %f/n",cir);

    return 0;

}
