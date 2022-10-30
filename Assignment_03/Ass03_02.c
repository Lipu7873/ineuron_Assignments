/*2. Write a program to check whether a given number is divisible by 5 or not*/
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a no: ");
    scanf("%d",&x);
    if(x%5==0)
    printf("Divisible");
    else
    printf("not-divisible");
    return 0;
}