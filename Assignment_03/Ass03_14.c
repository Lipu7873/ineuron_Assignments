/*14. Write a program to check whether a given number is divisible by 7 or divisible by 3.*/
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a no: ");
    scanf("%d",&x);
    if(x%7==0 && x%3==0)
    printf("Divisible by both");
    else if(x%7==0)
    printf("Divisible by 7");
    else if(x%3==0)
    printf("Divisible by 3");
    else
    printf("not divisible");
    return 0;

}