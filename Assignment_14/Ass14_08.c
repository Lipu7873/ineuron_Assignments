/*8. Write a program to find the second smallest number in an array.Take array values
from the user.*/
#include<stdio.h>
int main()
{
    int a[10],i,j,swap;
    printf("Enter 10 no.: ");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    for(i=0;i<9;i++)
    {
        for(j=i+1;j<=9;j++)
        {
            if(a[i]>a[j])
            {
                swap=a[i];
                a[i]=a[j];
                a[j]=swap;
            }
        }
    }
    printf("the second smallet of array is: %d",a[1]);
    return 0;
}