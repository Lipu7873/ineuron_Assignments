/*  1. Write a function to swap values of two in variables of calling function. (TSRS) */
#include<stdio.h>
void swap(int*,int*);
int main()
{
    int a,b;
    printf("Enter two no: ");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("after swaping\na=%d and b=%d",a,b);
}
void swap(int *p,int *q)
{
    int t=*p;
    *p=*q;
    *q=t;

}
