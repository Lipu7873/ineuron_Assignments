/*6. Write a program to print greater between two numbers. Print one number of both are
the same.*/
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter two no: ");
    scanf("%d%d",&x,&y);
    if(x>y)
    printf("%d",x);
    else
    printf("%d",y);
    return 0;
}