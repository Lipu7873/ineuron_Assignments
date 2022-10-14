//2. Write a program to print a given number without its last digit.
#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter a number: ");
    scanf("%d",&n);
    m=n/10;
    printf("Given number is %d with out it last digit is %d",n,m);
    return 0;
}
