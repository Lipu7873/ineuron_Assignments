/* 7. Write a program in C to count the total number of alphabets, digits and special
characters in a string. */
#include<stdio.h>
#include<string.h>
int main()
{
  char a[100];
  printf("Enter a string: ");
  fgets(a, 101, stdin);
  int ab_count=0,dt_count=0,sp_count=0;
  int i=0,j;
  int k=strlen(a)-1;
  while(i<k)
  {
    if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')
    ab_count++;
    else if(a[i]>='0'&&a[i]<='9')
    dt_count++;
    else
    sp_count++;

    i++;
  }
  printf("total number of alphabets, digits and special characters %d %d %d",ab_count,dt_count,sp_count);
  return 0;
}