/* 4. Write a recursive function to calculate sum of squares of first n natural numbers */

#include<stdio.h>
int SumSQR(int n);
int main()
{
    int x,y;
    printf("Enter a no: ");
    scanf("%d",&x);
    y=SumSQR(x);
    printf("Sum of square of first %d natural numbers is %d",x,y);
    return 0;
}

int SumSQR(int n)
{
      if(n>0)
    {
        return (SumSQR(n-1)+(n*n));
    }
}