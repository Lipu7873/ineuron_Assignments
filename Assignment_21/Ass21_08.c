/* 8. Write a program to store information of 10 students and display them using structure. */
#include<stdio.h>
#include<string.h>
struct Student
{
   int StudentId;
   char name[20];
   int roll_no;
};

// Input function for taking input from user
struct Student input()
{
   struct Student s;
   printf("Enter Student Id, Name and roll_no:\n");
   scanf("%d",&s.StudentId);
   fflush(stdin);
   gets(s.name);
   scanf("%d",&s.roll_no);
   return s;
}
//Display function 
struct Student display(struct Student s2)
{ 
   printf("\n%d %s %d",s2.StudentId,s2.name,s2.roll_no);
}

int main()
{
   int i;
   struct Student s[10];
   printf("Enter top 10 student details of school:\n");
   for(i=0;i<10;i++)
   s[i]=input();

   for(i=0;i<10;i++)
   display(s[i]);

   return 0;
}