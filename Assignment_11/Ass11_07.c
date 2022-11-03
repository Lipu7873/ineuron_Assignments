/*Write a function to print first N terms of Fibonacci series (TSRN)*/
#include<stdio.h>
void fibonacci (int x);
int main()
{
    int n;
    printf("Enter a no.: ");
    scanf("%d",&n);
    fibonacci(n);
    return 0;
}
void fibonacci (int x)
{
    int next=0,prev=0,cur=1;
    for(int i=1;i<x;i++)
    {
       next=prev + cur;
        prev=cur;
        cur=next;
    printf("%d ",next);
    }
}