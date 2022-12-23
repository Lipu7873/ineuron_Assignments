/* 2. Write a function to take input Student data from the user. [ Refer structure from
question 1 ] 
*/
#include<stdio.h>
struct Student
{
   int StudentId;
   char name[20];
   float Class;
};
struct Student input()
{
   struct Student s;
   printf("Enter Student Id, Name and Class:\n");
   scanf("%d",&s.StudentId);
   fflush(stdin);
   gets(s.name);
   scanf("%f",&s.Class);
   return s;
}
int main()
{
   struct Student e;
   e=input();
   printf("%d %s %0 .f",e.StudentId,e.name,e.Class);
}