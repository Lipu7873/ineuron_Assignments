//1. Write a program to find the Nth term of the Fibonnaci series.
#include<stdio.h>
int main()
{
    int prev=0,cur=1,next=0;
    int n;
    printf("Enter a no: ");
    scanf("%d",&n);
    //printf("1 ");
    for(int i=1;i<n;i++)
    {
       next=prev + cur;
        prev=cur;
        cur=next;
    }
    printf("%d",next);
    return 0;
}
