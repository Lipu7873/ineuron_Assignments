/*1. Write a program to check whether a given number is positive or non-positive.*/
#include<stdio.h>
int main()
    {
        int a;
        printf("Enter a no: ");
        scanf("%d",&a);
        if(a>0)
        printf("Positive");
        else
        printf("non-positive");
        return 0;
    }
