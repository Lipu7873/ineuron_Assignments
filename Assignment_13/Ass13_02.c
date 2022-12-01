/* 2. Write a recursive function to calculate sum of first N odd natural numbers */

#include<stdio.h>
int SumOdd(int);
int main()
{
    int x,y;
    printf("Enter a no: ");
    scanf("%d",&x);
    y=SumOdd(x);
    printf("Sum of first %d odd natural no. is %d",x,y);
}

int SumOdd(int n)
{
    if(n>0)
    {
        return (SumOdd(n-1)+(2*n-1));
    }
}