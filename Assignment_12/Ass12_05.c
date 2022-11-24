/* 5. Write a recursive function to print first N even Natural numbers */

#include<stdio.h>
int EvenNatural (int);
int main()
{
    int n;
    printf("Enter a no: ");
    scanf("%d",&n);
    EvenNatural(n);
    return 0;
}

int EvenNatural(int x)
{
    if(x>1)
    EvenNatural(x-1);
    printf("%d ",x+x); //5. even no.
    
} 