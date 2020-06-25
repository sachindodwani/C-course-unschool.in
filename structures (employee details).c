#include<stdio.h>
#include<string.h>
struct employ
{
    char name[20];
    int  employee_id;
    float experience;
    int salary;
};
int main()
{
  int i=0,n=5;
  printf("Enter details of %d employees.",n);
  struct employ e[n];
  for(i=0;i<n;i++)
  {
      printf("\nEnter employee name: ");
      scanf("%s",&e[i].name);
      printf("\nEnter employee id: ");
      scanf("%d",&e[i].employee_id);
      printf("\nEnter employee experience: ");
      scanf("%f",&e[i].experience);
      printf("\nEnter employee salary: ");
      scanf("%d",&e[i].salary);
  }
  for(i=0;i<n;i++)
  {
      printf("\nName of employee is %s.",e[i].name);
      printf("\nEmployee id is %d.",e[i].employee_id);
      printf("\nExperience of employee is %f years.",e[i].experience);
      printf("\nEmployee salary is %d rupees.",e[i].salary);
  }
  return 0;
}
