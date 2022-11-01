/*5. Write a program to calculate sum of cubes of first N natural numbers*/
#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter a no: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum+i*i*i;
    }
    printf("sum of cubes of first %d natural no is %d",n,sum);
    return 0;

}