//find the average and percentage
#include<stdio.h>

int main()
{
    int maths,bee,pbl,c,ppl,ave,per;

    //Find the Average
    printf("Enter the marks of five subject");
    scanf("%d%d%d%d%d",&maths,&bee,&pbl,&c,&ppl);

    ave=maths+bee+pbl+c+ppl/5;
    printf("average is : %d\n",ave);

    //Find the Percentage
    per=(maths+pbl+bee+c+ppl / 500)*100;
    printf("Percentage: %d%%\n", per);

    return 0;
}