/*7. Write a program to find second largest in an array.Take array values from the user.*/
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
    printf("the second largest of array is: %d",a[8]);
    return 0;
}