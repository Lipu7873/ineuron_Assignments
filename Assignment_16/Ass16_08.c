/* 8. Write a program in C to print or display an upper triangular matrix. */
#include<stdio.h>
int main()
{
    int a[3][3],i,j;
    printf("Enter the value of array: ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    //printing upper traingular of matrix
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i<=j)
            printf("%d ",a[i][j]);
            else
            printf("0 ");
        }
        printf("\n");
    }
    return 0;
}
