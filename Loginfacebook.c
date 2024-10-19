#include<stdio.h>
#include<conio.h>

int main()
{
    int password=1234,Enterpass;
    printf("Login your facebook account");
    scanf("%d",&Enterpass);

    if ( password == Enterpass )
    {
    printf("password accepted %d\n",password);
    printf("Your facebook account is open\n");
    }
    else
    {
    printf("password incorrect %d\n",Enterpass);
    printf("plese enter you right password\n");
    }
    return 0;

}