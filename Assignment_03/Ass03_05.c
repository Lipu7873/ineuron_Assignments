/*5. Write a program to check whether a given number is a three-digit number or not.*/
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a no: ");
    scanf("%d",&x);
    if(x>99&&x<1000)
    printf("Three digit no.");
    else
    printf("Not a three digit no.");
    return 0;
}