     /* 5. Write a program in C to find the sum of left diagonals of a matrix. */
   #include<stdio.h>

int main()
{
    int a[3][3],i,j,sum=0;
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
        for(j=2-i;j<3-i;j++)
        {
            sum=sum+a[i][j];
        
        }
    }
     printf("sum of left diagonal is %d ",sum);
    return 0;
}   
