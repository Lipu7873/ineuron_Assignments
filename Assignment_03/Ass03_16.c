/*16. Write a program to check whether a given character is an alphabet (uppercase), an
alphabet (lower case), a digit or a special character.*/
#include<stdio.h>
int main()
{
    char a;
    printf("Enter a character: ");
    scanf("%c",&a);
    if(a>='a'&&a<='z')
    printf("lowercase");
    else if(a>='A'&&a<='Z')
    printf("Uppercase");
    else if(a>='0' && a<='9')
    printf("Digit");
    else
    printf("Special character");
    return 0;
}