#include<stdio.h>

int main()
{
    int r,l,b,cir,rec,squ;
    float pie=3.14;

    //Area of Circle
    printf("Enter the value of radius");
    scanf("%d",&r);
    cir=pie*r*r;
    printf("Area of circle is %f\n",cir);

    //Area of Rectangle
    printf("Enter the value of l or b");
    scanf("%d%d",&l,&b);
    rec=l*b;
    printf("Area of rectangle is %d\n",rec);
    
    //Area of square
    printf("Enter the value of r");
    scanf("%d",&r);
    squ=r*r;
    printf("Area of square is %d\n",squ);

    return 0;


    }