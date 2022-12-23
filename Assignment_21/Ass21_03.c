/* 3. Write a function to display Student data. [ Refer structure from question 1 ] */
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
struct Student display(struct Student s2)
{ 
   printf("%d %s %1.f",s2.StudentId,s2.name,s2.Class);
}

int main()
{
   struct Student e;
   e=input();
   display(e);
   return 0;
}