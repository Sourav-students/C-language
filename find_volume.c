#include<stdio.h>
#include<conio.h>

int main(){

    int radius,height;
    float pie,vol_sphere,vol_cylinder,vol_cone;
    pie=3.14;

    printf("enter the radius and height\n");
    scanf("%d%d",&radius,&height);

    //volume of sphere=pie*r^2*h
    //volume of cylinder=4/3*pie*r^3
    //volume of cone=1/3*pie*r^2*h

    vol_sphere=(pie*radius*radius*height);
    printf("%f volume of sphere\n",vol_sphere);

    vol_cylinder=4/3*(pie*radius*radius*radius);
    printf("%f volume of cylinder\n",vol_cylinder);

    vol_cone=1/3*(pie*radius*radius*height);
    printf("%f volume of cone\n",vol_cone);

    return 0;
    
}