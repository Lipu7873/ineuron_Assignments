/*10. Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the
function.*/
#include<stdio.h>
int fact(int n)//factorial function
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    fact=fact*i;
    return fact;
}
int main()
{
    int i,sum=0;
    for(i=1;i<=5;i++)
    {
        sum=sum+fact(i)/i;
    }
    printf("%d",sum);
    return 0;
}