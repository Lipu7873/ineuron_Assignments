/* 10. Write a program to print a string in reverse using a pointer */
#include<stdio.h>
#include<string.h>
void reverse(char*);
int main()
{
    char str[50];
    printf("Enter a string:\n");
    gets(str);
    reverse(str);
    return 0;
}
void reverse(char *p)
{
    int i,l=strlen(p);
    for(i=l;i>=0;i--)
    printf("%c",*(p+i));
}