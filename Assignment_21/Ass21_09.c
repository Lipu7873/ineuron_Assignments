/* 9. Write a program to store information of n students and display them using structure */
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
   int i,n;
   printf("Number of student: ");
   scanf("%d",&n);
   struct Student s[n];
   printf("Enter top n student details of school:\n",n);
   for(i=0;i<n;i++)
   s[i]=input();

   for(i=0;i<n;i++)
   display(s[i]);

   return 0;
}