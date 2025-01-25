//Write a program to perform arithmetic operation’s using switch case//
#include<stdio.h>
#include<conio.h>

int main (){

    int x,y,check;
    printf("enter the value of x&y\n");
   scanf("%d%d\n",&x,&y);
    int sum,sub,mul,div,mod;
    printf("enter the your choice\n");
    

    scanf ("%d",&check);
    switch (check)
    {
     
        case 1:
        printf("the sum x&y = %d",sum = x + y );
        break;

        case 2:
        printf("the subtract of x&y = %d",sub = x - y);
        break;

        case 3:
        printf("the multiply of x&y = %d",mul = x * y);
        break;

        case 4:
        printf("the division of x&y = %f",div = x / y);
        break;

        case 5:
        printf("the modulus of x&y = %f",mod = x % y);
        break;

        default:
        printf("wrong input");
        break;

        
    }
     return 0;   
}
