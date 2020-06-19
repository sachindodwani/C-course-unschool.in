#include<stdio.h>
int main()
{
    float per=0;
    printf("ENTER YOUR PERCENTAGE: ");
    scanf("%f",&per);
    if(per<=100 && per>=0)
    {
        if(per>=80)
    {
        printf("\nA grade");

    }
    else if(per<80 && per>=70)
    {
        printf("\nB grade");
    }
    else if(per<70 && per>=60)
    {
        printf("\nC grade");
    }
    else if(per<60 && per>=45)
    {
        printf("\nD grade");
    }
    else
    {
        printf("\nFAIL");
    }
    }
    else
{
    printf("\nINVALID PERCENTAGE");
}
return 0;

}
