/*2. Write a function to find the smallest number from the given array of any size. (TSRS)*/
#include<stdio.h>
int smallest (int);
int main()
{
    int x,y;
    printf("Enter the size of array: ");
    scanf("%d",&x);
    y=smallest(x);
    printf("the smallest no. of the  given array is: %d",y);

}
int smallest (int n)
{
    int a[n],i,x;
    printf("Enter %d no.: ",n);
    for(i=0;i<=n-1;i++)
    scanf("%d",&a[i]);
    x=a[0];
    for(i=1;i<=n-1;i++)
    {
        if(a[i]<x)
        x=a[i];
    }
    
    return x;
}
