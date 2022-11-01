/*9. Write a program in C to read n number of values in an array and display it in reverse
order. Take array values from the user.*/
#include<stdio.h>
int main()
{
    int a[10],i;
    printf("Enter value of array");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    printf("Given array is :\n");
    for(i=0;i<10;i++)
    printf("%d ",a[i]);
    printf("\nRevers of the array is:\n ");
    for(i=9;i>=0;i--)
    printf("%d ",a[i]);
    return 0;
}