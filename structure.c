#include<stdio.h>



struct employee
{
    char employee_name[20];
    int income;
    int id_no;
    int attendence;
};


 int main () {
        
    struct employee emp1;
    
   
    
     printf("enter employee name");
     scanf("%s",&emp1.employee_name);
     printf("enter income");
     scanf("%d",&emp1.income);
     printf("enter the id_no");
     scanf("%d",&emp1.id_no);
     printf("enter the attendence");
     scanf("%d",&emp1.attendence);


     printf("EMPLOYEE_NAME = %s\n",emp1.employee_name);
     printf("INCOME = %d\n",emp1.income);
     printf("ID_NO = %d\n",emp1.id_no);
     printf("ATTENDENCE = %d\n",emp1.attendence);


        return 0;

}