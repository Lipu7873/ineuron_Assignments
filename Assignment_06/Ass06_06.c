/*6. Write a program to calculate factorial of a number*/
#include<stdio.h>
int main()
{
    int n,i,fact=1;
    printf("Enter a no: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    fact=fact*i;
    printf("factorial of %d is %d",n,fact);
    return 0;
}