/* 5. Write a program to find the maximum number between two numbers using a pointer */
#include<stdio.h>
int Max (int*,int*);
int main()
{
    int a,b,max;
    printf("Enter two no:\n");
    scanf("%d %d",&a,&b);
    max=Max(&a,&b);
    printf("The Max is %d",max);
}

int Max(int *p,int *q)
{
    if(*p>*q)
    return *p;
    else
    return *q;
}