/*7. Write a function in C to count a total number of duplicate elements in an array.*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n],j,i,count=0;
    printf("Enter the value of array: ");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(j=0;j<n-1;j++)
    {
    for(i=j+1;i<n;i++)
    {
    if(a[j]==a[i])
    count++;
    }
    }
    printf("total number of duplicate element is %d",count);
    return 0;
}
