/*4. Write a function to rotate an array by n position in d direction. The d is an indicative
value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and
d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )*/
#include<stdio.h>
int main()
{
    int d,n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n],i,j;
    printf("Enter the value of array: ");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter the direction size: ");
    scanf("%d",&d);
    for(j=0;j<d;j++)
    {
        int temp=a[0];
        for(i=0;i<n-1;i++)
        {
            a[i]=a[i+1];
        }
        a[n-1]=temp;
    }
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    return 0;

}
