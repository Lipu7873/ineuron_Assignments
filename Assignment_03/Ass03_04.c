/*4. Write a program to check whether a given number is an even number or an odd
number without using % operator.*/
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a no: ");
    scanf("%d",&x);
    if(x&1 != 0)
    printf("Odd");
    else
    printf("Even");
    return 0;
}