/* 9. Write a program to check whether a given number is an Armstrong number
or not*/
#include<stdio.h>
int main()
{
    int r,s=0,n,m,count=0;
    printf("enter a no: ");
    scanf("%d",&n);
    m=n;
    while (m!=0)
    {

        r=m%10;
        s=s+r*r*r;
        m=m/10;
    }
    if(s==n)
    printf("Armstrong number");
    else
    printf("Not an Armstrong Number");
    return 0;
    
}