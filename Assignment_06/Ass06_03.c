/*3. Write a program to calculate sum of first N odd natural numbers*/
#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter a no: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        sum=sum+(i*2)+1;
    }
    printf("sum of first %d odd no is %d",n,sum);
    return 0; 
}