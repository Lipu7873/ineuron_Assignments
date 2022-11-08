/* 6. Write a program in C to find the sum of rows and columns of a Matrix. */
#include<stdio.h>
int main()
{
    int a[3][3],i,j;
    printf("Enter the values of array: ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    //printing sum of row
    printf("sum of the row is: \n");
    for(i=0;i<3;i++)
    {
        int sum=0;
        for(j=0;j<3;j++)
            {
                sum=sum+a[i][j];
            }
            printf("%d \n",sum);
    }
    printf("\n\n");
    //printing sum of column
    printf("sum of the column is: \n");
    for(i=0;i<3;i++)
    {
        int sum=0;
        for(j=0;j<3;j++)
            {
                sum=sum+a[j][i];
            }
            printf("%d \n",sum);
    }
    return 0;
}
