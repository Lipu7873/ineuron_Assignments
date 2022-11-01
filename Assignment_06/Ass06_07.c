/*7. Write a program to count digits in a given number*/
#include<stdio.h>
int main()
{
    int n,count=0;
    printf("Enter a no: ");
    scanf("%d",&n);
    while(n!=0)
    {
    n=n/10;
    count++;
    }
    printf("No of digit in the given no is %d",count);
    return 0;
}