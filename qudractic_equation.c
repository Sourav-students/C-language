#include<stdio.h>
#include<conio.h>
#include<math.h>

int main () {

    int a,b,c,D;
    float x1,x2;

    printf("enter the value of x&y&z");
    scanf("%d%d%d",&a,&b,&c);

    D=b*b-4*a*c;

    if(D>=0){
        if (D>0)
        {   x1=(-b+sqrt(D))/(2 * a);// if D>0=   x1 = -b+sqrt(D)/2*a //
                    x2=(-b - sqrt(D))/(2 * a);  // x2 = -b-sqrt(D)/2*a //
            printf("x1 = %f \n x2 = %f\n",x1,x2);
        }
        else {
            x1=x2=-b/2*a; // if (D==0) x1=x2=-b/2*a //
            printf("x1=x2=%f\n");
        }
    }
    else {
        printf("Roots are imaginary");
    }
    return 0;
}