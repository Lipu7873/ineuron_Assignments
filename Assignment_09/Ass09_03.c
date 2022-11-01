/*3. Write a program which takes the day number of a week and displays a
unique greeting message for the day.*/
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a day no. of the week: ");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        printf("Good morning\nHappy Monday");
        break;
    case 2:
        printf("How are you!\nHappy Tuesday");
        break;
    case 3:
        printf("May you good!\nHappy Wednesday");
        break;
    case 4:
        printf("Good morning\nHappy Thursday");
        break;
    case 5:
        printf("Good morning !\nHappy Friday");
        break;
    case 6:
        printf("Good morning\nHappy Saturday");
        break;
    case 7:
        printf("Good morning\nHappy Sunday");
        break;
    default:
        printf("Invalid choice");
        break;
    }
    return 0;
}