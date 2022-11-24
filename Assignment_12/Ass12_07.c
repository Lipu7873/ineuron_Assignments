/* 7. Write a recursive function to print squares of first N natural numbers */

#include<stdio.h>
int SnaturalNo (int);
int main()
{
    int n;
    printf("Enter a no: ");
    scanf("%d",&n);
    SnaturalNo(n);
    return 0;
}

int SnaturalNo(int x)
{
    if(x>1)
    SnaturalNo(x-1);
    printf("%d ",x*x);      //7. square of n natural no.
    
}