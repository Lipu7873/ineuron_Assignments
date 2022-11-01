/*1. Write a program to calculate sum of first N natural numbers*/
#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter a no: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("sum first %d natural no is %d",n,sum);
    return 0;
}
