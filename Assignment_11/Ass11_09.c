/*9. Write a program in C to find the square of any number using the function.*/
#include<stdio.h>
int square (int);
int main()
{
    int x,y;
    printf("Enter a no: ");
    scanf("%d",&x);
    y=square(x);
    printf("square of %d is %d",x,y);
    return 0;
}

int square (int a)
{
    return (a*a);
}