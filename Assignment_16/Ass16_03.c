/* 3. Write a program in C to find the transpose of a given matrix.*/
 #include<stdio.h>
    int main()
    {
 //taking value for 1st array
    int a[3][3],b[3][3],i=0,j=0;
    printf("Enter the values of 1st array: ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    //transposing the matrix
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            b[i][j]=a[j][i];
        }
    }
    //printing the transposed matrix
    printf("now the transposed matrix is: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    }
