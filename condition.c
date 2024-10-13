//check if number is postive 
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num > 0) {
        printf("The number is positive.\n");
    }
    return 0;
}


//check if number is Even 
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("The number is even.\n");
    }
    return 0;
}


// Print a Message for Adult Age
#include <stdio.h>

int main() {
    int age;
    printf("Enter a number: ");
    scanf("%d", &age);
    if (age <= 18) {
        printf("you are adult.\n");
    }
    return 0;
}


//Find the Largest of Two Numbers
#include<stdio.h>

int main(){
int Num1,Num2;
printf("Enter the two number");
scanf("%d%d",&Num1,&Num2);

if ( Num1 > Num2){
    printf("the largest number is %d\n",Num1);

}
return 0;
}


//Check if a Number is Divide by "5"
#include<stdio.h>

int main()
{
    int Num;
    printf("Enter the value");
    scanf("%d",&Num);

if (Num % 5 == 0)
{
    printf("is dvided by 5 :\n");
}
}


