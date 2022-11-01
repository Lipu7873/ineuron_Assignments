/*1. Write a program which takes the month number as an input and display
number of days in that month.*/
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a no: ");
    scanf("%d",&x);
    switch (x)
    {
    case 1:
        printf("January\n31 days");
        break;
    case 2:
        printf("February\n28 days");
        break;
    case 3:
        printf("March\n31 days");
        break;
    case 4:
        printf("April\n30 days");
        break;
    case 5:
        printf("May\n31 days");
        break;
    case 6:
        printf("June\n30 days");
        break;
    case 7:
        printf("July\n31 days");
        break;
    case 8:
        printf("August\n31 days");
        break;
    case 9:
        printf("September\n30 days");
        break;
    case 10:
        printf("October\n31 days");
        break;
    case 11:
        printf("November\n30 days");
        break;
    case 12:
        printf("December\n31 days");
        break;
    
    default:
        printf("Invalid no.");
        break;
    }
    return 0;
}
