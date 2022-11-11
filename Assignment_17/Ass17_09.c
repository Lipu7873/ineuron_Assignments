/* 9. Write a C program to sort a string array in ascending order. */
#include<stdio.h>
#include<string.h>
int main()
{
  char a[100],temp;
  printf("Enter a string: ");
  fgets(a, 101, stdin);
  int i,j;
  j=strlen(a);
  for(i=0;i<j-1;i++)
  {
    int k;
    for(k=i+1;k<j;k++)
    {
      if(a[i]>a[k])
      {
        temp=a[i];
        a[i]=a[k];
        a[k]=temp;
      }
    }
  }
  printf("%s",a);
  return 0;
}
