/*1. Write a function to calculate LCM of two numbers. (TSRS)*/
#include<stdio.h>
int lcm(int,int);
int main()
{
    int a,b,c,D;
    printf("Enter two no: ");
    scanf("%d%d",&a,&b);
    D=lcm(a,b);
    printf("LCM of %d and %d is %d",a,b,D);
}
int lcm(int x,int y)
{
    int i;
    for(i=1;i<=x*y;i++)
    {
        if(i%x==0&&i%y==0)
        break;
    }
    return i;
}
