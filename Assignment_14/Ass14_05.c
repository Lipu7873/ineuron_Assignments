/*5. Write a program to find the smallest number stored in an array of size 10. Take array
values from the user.*/
#include<stdio.h>
int main()
{
    int a[10],i,x;
    printf("Enter 10 no.: ");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    x=a[0];
    for(i=0;i<=9;i++)
    {
        
        if(a[i]<x)
        x=a[i];
    }
    printf("the smallest no of the array is: %d",x);
}