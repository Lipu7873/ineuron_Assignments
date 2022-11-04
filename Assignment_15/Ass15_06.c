/*6. Write a function in C to read n number of values in an array and display it in reverse
order.*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int i,a[n],j;
    int temp;
    printf("Enter the value of array: ");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for (j=n-1;j>=0;j--)
    printf("%d ",a[j]);
    return 0;
}