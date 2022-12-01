/* 7. Write a recursive function to calculate HCF of two numbers */

#include<stdio.h>
int HCF(int,int);
int main()
{
    int a,b,c;
    printf("Enter two no: ");
    scanf("%d%d",&a,&b);
    c=HCF(a,b);
    printf("HCF of %d and %d is %d",a,b,c);
    return 0;
}

int HCF(int x,int y)
{
    if(y!=0)
    return (HCF(y,x%y));
    else
    return x;
}