/* 6. Write a function to sort employees according to their names [refer structure from
question 1] */
 #include<stdio.h>
#include<string.h>
struct employee
{
   int employeeId;
   char name[20];
   float Salary;
};

// Input function for taking input from user
struct employee input()
{
   struct employee s;
   printf("Enter employee Id, Name and Salary:\n");
   scanf("%d",&s.employeeId);
   fflush(stdin);
   gets(s.name);
   scanf("%f",&s.Salary);
   return s;
}
//sorting function(sort by Salary)
struct employee sortBySalaryes(struct employee e[],int size)
{
      int i,r;
      struct employee temp;
      for(r=0;r<=size-1;r++)
      {
          for(i=0;i<size-1-r;i++)
          {
            if(strcmp(e[i].name,e[i+1].name)>0)
            {
               temp=e[i];
               e[i]=e[i+1];
               e[i+1]=temp;
            }
          }
      }
}

// Display function 
struct employee display(struct employee s2)
{ 
   printf("\n%d %s %1.f",s2.employeeId,s2.name,s2.Salary);
}

int main()
{
   struct employee e[5];
   for(int i=0;i<5;i++)
      e[i]=input();

   sortBySalaryes(e,5);
   for(int i=0;i<5;i++)
      display(e[i]);
}