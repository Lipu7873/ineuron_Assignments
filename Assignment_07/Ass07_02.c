//2. Write a program to print first N terms of Fibonacci series.
#include<stdio.h>
int main()
{
    int prev=0,cur=1,next;
    int n;
    printf("Enter a no: ");
    scanf("%d",&n);
    printf("1 ");
    for(int i=0;i<n-1;i++)
    {
        next=prev+cur;
        prev=cur;
        cur=next;
        printf("%d ",next);
    }
    return 0;
}