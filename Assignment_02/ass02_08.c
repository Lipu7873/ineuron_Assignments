/*8. Write a program to check whether the given number is even or odd using a bitwise
operator.*/
#include<stdio.h>
int main()
{
    int x,result;
    printf("Enter a number: ");
    scanf("%d",&x);
    result=x&1;
    if (result==1)
    {
        printf("Odd Number");
    }
    else
    printf("Even Number");
    return 0;
    
}
