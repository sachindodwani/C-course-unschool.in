#include<stdio.h>
int main()
{
    int num,sum=0,i=0;
    for(i=0;num!=0;i++)
    {
        printf("enter a number to add: ");
        scanf("%d",&num);
        sum=sum+num;
    }
    printf("sum of total numbers entered is %d",sum);
    return 0;
}
