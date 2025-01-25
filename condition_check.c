#include<stdio.h>

int main() {

    int num1,num2;
    printf("enter two value\n");
    scanf("%d%d",&num1,&num2);

    if(num1 == num2){
        printf("num1 = %d\n",num1);
        printf("%d is equal to num1\n",num2);
    }
    else {
        printf("num1 = %d\n",num1);
        printf("%d is not equal to num1\n",num2);
    }
    return 0;
}