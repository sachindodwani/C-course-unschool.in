#include<stdio.h>
int main()
{
int a,b,c,d,e,f,g;
printf("enter two numbers-\n");
scanf("%d%d",&a,&b);
c=a+b;
d=a-b;
e=a*b;
f=a/b;
g=a%b;
printf("sum of %d and %d is %d.\n",a,b,c);
printf("difference of %d and %d is %d.\n",a,b,d);
printf("product of %d and %d is %d.\n",a,b,e);
printf("division of %d and %d is %d.\n",a,b,f);
printf("remainder of %d and %d is %d.\n",a,b,g);
return 0;
}
