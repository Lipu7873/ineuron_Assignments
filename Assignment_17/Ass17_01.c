/*1. Write a program to calculate the length of the string. (without using built-in method) */
#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    int i,count=0;
    printf("Enter a Name: ");
    fgets(str, 21, stdin);
    for(i=1;str[i];i++)
        {
          count++;
        }
    printf("%d",count);
    return 0;
}
