//4. Write a program to swap values of two int variables without using a third variable.
#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter two number: ");
    scanf("%d%d",&n,&m);
    printf("Given %d %d",n,m);
    n=n+m;
    m=n-m;
    n=n-m;
    printf("\nAfter swaping %d %d",n,m);
    return 0;
}
