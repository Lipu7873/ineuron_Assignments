/* 1. Write a recursive function to calculate sum of first N natural numbers */

#include<stdio.h>
int SumNatural(int);
int main()
{
    int x,y;
    printf("Enter a no: ");
    scanf("%d",&x);
    y=SumNatural(x);
    printf("Sum of first %d natural no. is %d",x,y);
    return 0;
}

int SumNatural(int n)
{
    
    if(n>0)
    {
        return (SumNatural(n-1)+n);
    }

}
