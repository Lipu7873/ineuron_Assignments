/*2. Write a function to calculate HCF of two numbers. (TSRS)*/
#include<stdio.h>
int hcf(int,int);
int main()
{
    int a,b,D;
    printf("Enter 2 no: ");
    scanf("%d%d",&a,&b);
    D=hcf(a,b);
    printf("HCF of the %d and %d is %d",a,b,D);
}
int hcf(int x,int y)
{
    int z;
    for(z=x<y?x:y;z>=1;z--)
    {
        if(x%z==0&&y%z==0)
        break;
    }
    return z;
    
}