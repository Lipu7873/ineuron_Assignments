/* 3. Write a program to count vowels in a given string */
#include<stdio.h>
#include<string.h>
int main()
{
  char a[100],b[10]={'a','e','i','o','u'};
  int count=0,i,j;
  printf("Enter a name: ");
  fgets(a, 101, stdin);

  for(i=0;a[i];i++)
  {
    for(j=0;b[j];j++)
    {
    if(a[i]==b[j])
    count++;
    }
  }
  printf("No. of vowel is %d",count);
  return 0;
}
