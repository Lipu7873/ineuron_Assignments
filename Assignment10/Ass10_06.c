// 6. Write a function to calculate the factorial of a number. (TSRS)
#include<stdio.h>
int factorial(int);
int main()
{
    int n,F;
    printf("Enter a number");
    scanf("%d",&n);
    F=factorial(n);
    printf("factorial of %d is %d",n,F);
    return 0;
}
int factorial(int m)
{
    int i,j=1;
    for ( i=1; i<=m; i++)
    {
        j=j*i;
        //printf("%d",&i);
    }
return j;    
    
}