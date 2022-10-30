/*4. Write a program to print the first N odd natural numbers*/
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter a no: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    printf("%d ",i*2+1);
    return 0;
}