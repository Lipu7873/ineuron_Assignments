/*8. Write a function to print PASCAL Triangle. (TSRN)*/
#include<stdio.h>
int fact(int n)//factorial function
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    fact=fact*i;
    return fact;
}
int comb(int n, int r)//combination function
{
    return fact(n)/(fact(r)*fact(n-r));
}
int perm(int n,int r)//permitation function
{
    return fact(n)/fact(n-r);
}
int pascal(int n)//pascal function
{
    int i,j;
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d ",comb(i,j));
        }
        printf("\n");
    }
}
int main()//main function
{
    int x;
    printf("Enter a no: ");
    scanf("%d",&x);
    pascal(x);
    return 0;
}