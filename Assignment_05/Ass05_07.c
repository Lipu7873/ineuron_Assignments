/*7. Write a program to print the first N even natural numbers in reverse order*/
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter a no: ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    printf("%d ",i*2);
    return 0;
}