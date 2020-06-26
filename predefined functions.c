#include<stdio.h>
#include<string.h>
#include<time.h>
#include<math.h>
void main()
{
    char str1[20],str2[20];
    strcpy(str1,"hey there");
    strcpy(str2,"hello");
    printf("\nstr1 is |%s| and str2 is |%s|.",str1,str2);
    int cmp_value;
    cmp_value = strcmp(str1,str2);
    printf("\ncmp value is %d.",cmp_value);
    printf("\nreverse of str1 is |%s|.",strrev(str1));
    int len;
    len = strlen(str2);
    printf("\nlength of str2 is %d.",len);
    printf("\nstr1 in upper case: %s.",strupr(str1));
    printf("\nstr2 in lower case: %s.",strlwr(str2));
    double a,b,c;
    printf("\nEnter the base value: ");
    scanf("%lf",&a);
    printf("\nEnter power value: ");
    scanf("%lf",&b);
    c = pow(a,b);
    printf("\n%lf to the power %lf is equal to %lf.",a,b,c);
    printf("\nsquare root of %lf is %lf.",a,sqrt(a));
    printf("\ninteger greater than or equal to %lf is %lf.",a,ceil(a));
    printf("\nInteger less than or equal to %lf is %lf.",a,floor(a));
    srand(time(0));
    int l;
    l = rand() % 6 + 1;
    printf("\nIf we roll a dice then we get %d.",l);
}
