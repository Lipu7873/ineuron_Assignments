/* 8. Write a program in C to copy one string to another string. */
#include<stdio.h>
#include<string.h>
int main()
{
  char a[100],b[100];
  printf("Enter a string: ");
  fgets(a, 101, stdin);
  int j=strlen(a);
  for(int i=0;i<=j;i++)
  {
    b[i]=a[i];
  }
  printf("%s",b);
  return 0;
}
