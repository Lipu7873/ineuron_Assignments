/*12. Write a program to check whether a given alphabet is in uppercase or lowercase.*/
#include<stdio.h>
int main()
{
    char a;
    printf("Enter a character: ");
    scanf("%c",&a);
    if(a>='a'&&a<='z')
    printf("lowercase");
    if(a>='A'&&a<='Z')
    printf("Uppercase");
    return 0;
}