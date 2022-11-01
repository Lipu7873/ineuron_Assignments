/*6. Program to check whether a year is a leap year or not. Using switch
statement*/
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a year");
    scanf("%d",&x);
    switch (x%100 == 0)
    {
    case 1:
        switch (x%400==0)
            {
            case 1:
            printf("Leap Year");
            break;
            case 0:
            printf("Not a Leap Year");
            break;
            }
        break;
    case 0:
        switch (x%4==0)
        {
        case 1:
            printf("Leap Year");
            break;
        
        case 0:
            printf("Not a Leap Year");
            break;
        }
        break;
    
    default:
        break;
    }
    return 0;
}