/*Write a program to print a table of N.*/
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter a table no: ");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    printf("%d ",i*n);
    return 0;
}