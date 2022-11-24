/* 1. Write a recursive function to print first N natural numbers */

#include<stdio.h>
int NaturalNo (int);
int main()
{
    int n;
    printf("Enter a no: ");
    scanf("%d",&n);
    NaturalNo(n);
    return 0;
}

int NaturalNo(int x)
{
    if(x>1)
    NaturalNo(x-1);
    printf("%d ",x);    //1. natural no.
    
} 
