/*8. Program to convert a positive number into a negative number and negative
number into a positive number using a switch statement.*/
#include<stdio.h>
int main()
{
    int n;
    printf("enter a no: ");
    scanf("%d",&n);
    switch (n>=0)
    {
    case 1:
        printf("%d",n*-1);
        break;
    
    case 0:
        printf("%d",n*-1);
        break;
    }
    return 0;
}