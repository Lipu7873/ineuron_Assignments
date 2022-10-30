/*8. Write a program to check whether a given year is a leap year or not.*/
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a year: ");
    scanf("%d",&x);
    if(x%100==0)
    {
        if(x%400==0)
        printf("Leap Year");
        else
        printf("not a Leap year");
    }
    else
    {
        if(x%4==0)
        printf("Leap Year");
        else
        printf("Not a Leap Year");
    }
    return 0;

}