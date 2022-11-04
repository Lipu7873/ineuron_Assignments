/*8. Write a function in C to print all unique elements in an array.*/
#include<stdio.h>
int main()
{ int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n],j,i,count;
    printf("Enter the value of array: ");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(j=0;j<n;j++)
    {
        count=0;
    for(i=0;i<n+1;i++)
    {
        if(j!=i)
        {
            if(a[j]==a[i])
            {
            count++;
            }
        }   
    }
    if(count==0)
        {
            printf("%d ",a[j]);
        }
    }
    printf("total number of duplicate element is %d",count);
    return 0;
}
