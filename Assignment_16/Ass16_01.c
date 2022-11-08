/* 1. Write a program to calculate the sum of two matrices each of order 3x3.*/
#include<stdio.h>
int main()
{
    //taking value for 1st array
    int a[3][3],b[3][3],c[3][3],i=0,j=0;
    printf("Enter the values of 1st array: ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
//taking value for 2nd matrix
    printf("Enter the values of 2nd array: ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    //adding 1st matrix and 2nd matrix
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    //sum of the matrix
    printf("sum of the matrix is: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",c[i][j]);
            if(j==2)
            printf("\n");
        }
    }
    
    return 0;
}
