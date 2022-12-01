/* 9. Write a program in C to count the digits of a given number using recursion. */
#include<stdio.h>
int Countdigit(int);
int main()
{
    int n,ans;
    printf("Enter a no: ");
    scanf("%d",&n);
    ans=Countdigit(n);
    printf("%d",ans);
}

int Countdigit(int x){
    if(x!=0)
    {
    return 1+Countdigit(x/10);
    }
    else
    return 0;
}