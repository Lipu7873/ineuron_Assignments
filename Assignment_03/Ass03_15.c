/*15. Write a program to check whether a given number is positive, negative or zero.*/
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a no: ");
    scanf("%d",&x);
    if(x>0)
    printf("Positive number");
    else if(x<0)
    printf("Negative number");
    else
    printf("Zero");
    return 0;
}