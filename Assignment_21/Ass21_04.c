/* 4. Write a function to find the highest salary employee from a given array of 10
employees. [ Refer structure from question 1]
*/
#include<stdio.h>
struct Employee
{
   int EmployeeId;
   char name[20];
   float salary;
};

struct Employee input()
{
   struct Employee e;
   printf("Enter Employee Id, Name and salary:\n");
   scanf("%d",&e.EmployeeId);
   fflush(stdin);
   gets(e.name);
   scanf("%f",&e.salary);
   return e;
}
struct Employee display(struct Employee s2)
{ 
   printf("\n%d %e %1.f",s2.EmployeeId,s2.name,s2.salary);
}
struct Employee highsalaryes(struct Employee e[],int size)
{
   int i,temp=0;
   for(i=0;i<size;i++)
   {
      if(e[i].salary>temp)
      temp=e[i].salary;
   }
   printf("the highest salary is %d",temp);
   }

int main()
{
   struct Employee e[5];
     int i;
     for(i=0;i<=4;i++)
      e[i]=input();

      highsalaryes(e,5);

     /* for(i=0;i<=9;i++)
      display(e[i]); */
}