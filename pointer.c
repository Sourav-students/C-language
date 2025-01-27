#include<stdio.h>


int main () {
    int x=4,y=5;
    int *ptr;
    
    ptr=&y;


    printf("The address of x = %u\n",&x);
    printf("The address of y = %u\n",&y);
    printf("THe address of ptr = %u\n",&ptr);
   
     printf(" value of x = %d\n",x);
    printf(" value of y = %d\n",y);
     printf(" value of ptr = %d\n",*ptr);

   
  *ptr=20;
    
   printf("value of x = %d\n",x);
   printf("value of y = %d\n",y);
   printf("value of ptr = %d\n",*ptr);

return 0;
}
