/*4. Write a program to find the greatest number stored in an array of size 10. Take array
values from the user.*/
#include<stdio.h>
int main()
{
    int a[10],i,x=0;
    printf("Enter 10 no.: ");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    for(i=0;i<=9;i++)
    {
        if(a[i]>x)
        x=a[i];
    }
    printf("the greates no. of the  given array is: %d",x);
    return 0;
}