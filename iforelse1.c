//check if number is postive else negative
#include<stdio.h>

int main(){
    int Num;
    printf("check the numbar is pos/neg");
    scanf("%d",&Num);

    if (Num >= 0, Num <= 0){
        printf("%d is negative.\n",Num);
    }
    else
    printf("%d is postive.\n",Num);

    return 0;
}


//print a message for adult age
#include<stdio.h>

int main(){
    int age;
    printf("Enter the age");
    scanf("%d",&age);

    if (age > 18){
        printf("%d you are not adult.\n",age);
        printf("They can drive\n");
    }
    else{
    printf("%d you are adult.\n",age);
    printf("They can't drive");
}
    return 0;
}



//check if number is even else odd
#include<stdio.h>

int main(){
    int Num;
    printf("Enter the value");
    scanf("%d",&Num);

    if (Num % 2 == 0){
        printf("The Number is even %d",Num);
        
    }
    else{
    printf("The Number is odd %d",Num);
    
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

