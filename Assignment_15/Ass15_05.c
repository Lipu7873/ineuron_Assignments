/*5. Write a function to find the first occurrence of adjacent duplicate values in the array.
Function has to return the value of the element.*/
#include<stdio.h>
int main()
{
    int n,k;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n],i;
    printf("Enter the value of array: ");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
    if(a[i]==a[i+1])
    {
        k=a[i];
        break;
    }
    }
    printf("the first occurrence of adjacent duplicate value is %d",k);
    return 0;
}