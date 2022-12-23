/* 10. Write a program to enter the marks of 5 students in Chemistry, Mathematics and
Physics (each out of 100) using a structure named Marks having elements roll no.,
name, chem_marks, maths_marks and phy_marks and then display the percentage
of each student. */
#include<stdio.h>
struct student
{
   int Rollno;
   char name[30];
   float chem_marks,maths_marks,phy_marks;
};

int main()
{
   
   struct student s[5];
   int i;
   printf("Enter 5 students marks and persentages\n");
   for(i=0;i<5;i++)
   {
   printf("Student %d\n",i+1);
   printf("Enter student name: ");
   fflush(stdin);
   gets(s[i].name);
   printf("Enter Roll no.: ");
   scanf("%d",&s[i].Rollno);
   printf("\nEnter chemistry marks: ");
   scanf("%f",&s[i].chem_marks);
   printf("\nEnter Mathematics marks: ");
   scanf("%f",&s[i].maths_marks);
   printf("\nEnter Physics marks: ");
   scanf("%f",&s[i].phy_marks);
   }
   for(i=0;i<5;i++)
   {
      printf("Student %d\n",i+1);
      float percentage=(s[i].chem_marks+s[i].maths_marks+s[i].phy_marks/300*100);
      printf("percentage : %1.f\n",percentage);
   }
}