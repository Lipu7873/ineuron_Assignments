/* 5. Write a recursive function to calculate sum of digits of a given number */

#include<stdio.h>
int SumDigit(int);
int main()
{
  int x,y;
  printf("Enter a no: ");
  scanf("%d",&x);
  y=SumDigit(x);
  printf("Sum of digit of given no is %d",y);
  return 0;
}

int SumDigit(int n)
{
    if(n>0)
    {
        return (SumDigit(n/10)+n%10);
    }
}