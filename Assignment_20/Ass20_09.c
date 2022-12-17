/* 9. Write a program to print the elements of an array in reverse order.*/
#include<stdio.h>
void input(int*,int);
void revDisplay(int*,int);
int main()
{
    int a[10];
    input(a,10);
    revDisplay(a,10);
    return 0;
}

void input(int *p,int size)
{
    int i;
    printf("Enter %d numbers: ",size);
    for(i=0;i<size;i++)
    scanf("%d",(p+i));
}
void revDisplay(int *p,int size)
{
    int i;
    for(i=size-1;i>=0;i--)
    printf("%d ",*(p+i));
}