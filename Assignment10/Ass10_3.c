/* 3. Write a function to check whether a given number is even or odd. Return 1 if the
number is even, otherwise return 0. (TSRS)*/
#include<stdio.h>
int EvenOdd(int);
int main()
{
    int n,l;
    printf("Enter a number");
    scanf("%d",&n);
    l=EvenOdd(n);
    printf("%d",l);
    return 0;
}

int EvenOdd(int m)
{
    if(m%2)
    {
        return 0;
    }
    else{
    return 1;
    }
}