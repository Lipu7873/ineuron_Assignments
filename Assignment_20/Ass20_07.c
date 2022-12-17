/* 7. Write a program to count the number of vowels and consonants in a string using a
pointer. */

#include<stdio.h>
#include<string.h>
void countVowCon(char*);
int main()
{
    char str[50];
    printf("Enter a string:\n");
    gets(str);
    countVowCon(str);
}
void countVowCon(char *p)
{
    int i,cV=0,cC=0;
    for(i=0;*(p+i);i++)
    {
        if(*(p+i)=='a'||*(p+i)=='e'||*(p+i)=='i'||*(p+i)=='o'||*(p+i)=='u')
        cV++;
        else
        cC++;
    }
    printf("Vowels is %d\nConsonants is %d",cV,cC);
}