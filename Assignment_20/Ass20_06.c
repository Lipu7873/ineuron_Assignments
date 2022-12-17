/* 6. Write a program to calculate the length of the string using a pointer */
#include<stdio.h>
int length (char*);
int main(){
    char str[50];
    int len;
    printf("Enter a string:\n");
    gets(str);
  len=length(str);
  printf("length of the string is %d",len);
}
int length (char *p)
{
    int i;
    for(i=0;*(p+i);i++);
    return i;
}