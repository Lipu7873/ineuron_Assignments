/*2. Write a program to count the occurrence of a given character in a given string. */
#include<stdio.h>
#include<string.h>
int main()
{
  char a[20],b;
  int i,count=0;
  printf("Enter a string: ");
  fgets(a, 21, stdin);
  printf("Select a character on the string: ");
  scanf("%c",&b);
  for(i=0;a[i];i++)
  {
    if(a[i]==b)
    {
      count++;
    }
  }
  printf("occurance of character is %d",count);
  return 0;

}
