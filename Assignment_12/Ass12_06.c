/* 6. Write a recursive function to print first N even natural numbers in reverse order */

#include<stdio.h>
int Natu (int);
int main()
{
    int n;
    printf("Enter a no: ");
    scanf("%d",&n);
    Natu(n);
    return 0;
}

int Natu(int x)
{
     printf("%d ",x+x);  //6. reverse even no.
    if(x>1)
    Natu(x-1);

    
} 