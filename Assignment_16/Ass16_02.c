/* 2. Write a program to calculate the product of two matrices each of order 3x3.*/
#include<stdio.h>
int main()
{
    int k,sum=0;
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
//multipling two matrix
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                sum=sum+(a[i][k]*b[k][j]);
            }
            c[i][j]=sum;
                sum=0;
        }
    }

    printf("product of the matrix is: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}  
