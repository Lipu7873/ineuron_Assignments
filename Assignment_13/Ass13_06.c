/* 6. Write a recursive function to calculate factorial of a given number */

#include<stdio.h>
int factorial(int);
int main()
{
    int x,y;
    printf("Enter a no: ");
    scanf("%d",&x);
    y=factorial(x);
    printf("Factorial of %d is %d",x,y);

    return 0;
}

int factorial(int n)
{
    if(n>1)
    {
    return(factorial(n-1)*n);
    }
}