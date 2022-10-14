// 5. Write a program to input a three-digit number and display the sum of the digits.
#include<stdio.h>
int main()
{
    int n,m,x,y,z,sum;
    printf("Enter a number");
    scanf("%d",&n);
    x=n%10;
    y=n/10;
    z=y%10;
    m=y/10;
    sum=x+z+m;
    printf("sum of the %d is %d",n,sum);
    return 0;
}
