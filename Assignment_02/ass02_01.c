//1. Write a program to print unit digit of a given number
#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter a number");
    scanf("%d",&n);
    m=n%10;
    printf("unit digit of %d is %d",n,m);
    return 0;
}
