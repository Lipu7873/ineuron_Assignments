/* 10. Write a program in C to find the row with maximum number of 1s. */
#include<stdio.h>
int main()
{
    int a[3][3],i,j;
    int max=0,index=0;
    printf("Enter the value of array: ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

       for(i=0;i<3;i++)
    {
        int sum=0;
        for(j=0;j<3;j++)
        {
            if(a[i][j]==1)
            {
                sum=sum+a[i][j];
            }
        }
        if(sum>max)
        {
            max=sum;
            index=i;
        }
    }
    printf("the row is %d(0 is Base) having %d 1s",index,max);
    return 0;
}
