/* 5. Write a program to convert a given string into lowercase */
#include<stdio.h>
#include<string.h>
int main()
{
  char a[100];
  int i;
  printf("Enter a string: ");
  fgets(a,101,stdin);
  for(i=0;a[i];i++)
  {
    if(a[i]>='A' && a[i]<='Z')
    a[i]=a[i]+32;
  }
  printf("%s",a);
  return 0;
}
