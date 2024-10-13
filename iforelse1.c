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
