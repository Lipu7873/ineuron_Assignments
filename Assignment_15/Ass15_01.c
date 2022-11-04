/* 1. Write a function to find the greatest number from the given array of any size. (TSRS) */
#include<stdio.h>
int greatest (int);
int main()
{
    int x,y;
    printf("Enter the size of array: ");
    scanf("%d",&x);
    y=greatest(x);
    printf("the greates no. of the  given array is: %d",y);

}
int greatest (int n)
{
    int a[n],i,x=0;
    printf("Enter %d no.: ",n);
    for(i=0;i<=n-1;i++)
    scanf("%d",&a[i]);
    for(i=0;i<=n-1;i++)
    {
        if(a[i]>x)
        x=a[i];
    }
    
    return x;
}
