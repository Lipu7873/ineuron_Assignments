/*2. Write a program to calculate sum of first N even natural numbers*/
#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter a no: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        sum=sum+i*2;
    }
    printf("sum of first %d even no is %d",n,sum);
    return 0;
}