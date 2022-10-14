// 3.Write a program to swap values of two int variables
#include<stdio.h>
int main()
{
    int n,m,p;
    printf("Enter two number");
    scanf("%d%d",&n,&m);
    printf("given number is n=%d and n=%d",n,m);
    p=n;
    n=m;
    m=p;
    printf("\nafter swaping n=%d and m=%d",n,m);
    return 0;
}
