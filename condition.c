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


//Determine Grade Based on Marks
#include<stdio.h>

int main(){
    int marks;
    printf("Enter the marks");
    scanf("%d",&marks);

    if (marks <= 33){
        printf("you are fail %d",marks);
        
    }
    else{
    printf("you are pass %d",marks);
    
}
    return 0;
}



//ATM pin check
#include<stdio.h>

int main(){
    int pin=4367,enterpin;
    printf("Enter the pin");
    scanf("%d",&enterpin);

    if (enterpin == pin){
        printf("Pin accept %d recive your money",enterpin);
        
    }
    else{
    printf("Incorrect pin %d bhakkk yaha seee",enterpin);
    
}
    return 0;
}
