//Write a program to read marks of a student in six subjects and print whether pass or fail.

#include<stdio.h>
#include<conio.h>

int main () {

    int eng,maths,comp,pbl,beee,esdm,i;
    i=(eng,maths,comp,pbl,beee,esdm);
    printf("enter the marks of 5 subject");
    scanf("%d%d%d%d%d%d",&eng,&maths,&comp,&pbl,&beee,&esdm,&i);

     if (eng,maths,comp,pbl,beee,esdm >= 33 ){
         printf("you have pass in all subjects");
    }
    
    else if  (eng,maths,comp,pbl,beee,esdm < 33 ){
       printf("you are fail one subject and more subject");
    }
    else {
        printf("sorry couldn't find");
    }
return 0;
}