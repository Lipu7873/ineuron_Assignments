/* 10. Write a program to make the last digit of a number stored in a variable as zero.
(Example - if x=2345 then make it x=2340)*/
#include<stdio.h>
int main()
{
    int n,m=0;
    printf("Enter a number");
    scanf("%d",&n);
    m=n/10;
    n=m*10;
    printf("%d",n);
    return 0;
}
