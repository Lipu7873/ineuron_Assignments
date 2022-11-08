/* 9. Write a program in C to accept a matrix and determine whether it is a sparse matrix. */
#include<stdio.h>
int main()
{
    int a[3][3],i,j;
    int count1=0,count2=0;
    printf("Enter the value of array: ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    //sparse matrix or not
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j]==0)
            count1++;
            else
            count2++;
        }
    }
    if(count1>count2)
    printf("sparse matrix");
    else
    printf("not a sparse matrix");
    return 0;
}
