/* 2. Write a recursive function to print first N revNaturalral numbers in reverse order */

#include<stdio.h>
int revNatural (int);
int main()
{
    int n;
    printf("Enter a no: ");
    scanf("%d",&n);
    revNatural(n);
    return 0;
}

int revNatural(int x)
{
    printf("%d ",x);         //2. reverse Natural no.
    if(x>1)
    revNatural(x-1);
    
    
}