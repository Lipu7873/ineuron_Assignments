/*3. Write a function to sort an array of any size. (TSRS)*/
#include<stdio.h>
void sort(int);
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    sort(n);
    return 0;
}
void sort(int n)
    {   
    int a[n],i,swap;
    printf("Enter the value of array: ");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
            swap=a[i];
            a[i]=a[j];
            a[j]=swap;
            }
        }
    }
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    }
