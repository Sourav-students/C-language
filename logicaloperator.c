#include <stdio.h>

int main (){

int age1,age2;

printf("enter the age");
scanf("%d%d",&age1,&age2);

//condition for logical operators
//for and (&&)
if (age1 >= 18 && age2 >= 18){
    printf("you can drive\n");
}
else {
    printf("you can't drive\n");
}
//for or (||)
if (age1 >= 18 || age2 >= 18){
    printf("you can drive\n");
}
else {
    printf("you can't drive\n");
}
// for not (!)
if (!(age1 == 18 )){
    printf("you can drive\n");
}
else {
    printf("you can't drive\n");
}
return 0;
}