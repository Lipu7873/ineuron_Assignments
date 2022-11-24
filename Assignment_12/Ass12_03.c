/* 3. Write a recursive function to print first N odd natural numbers */

#include<stdio.h>
int Oddnatural (int);
int main()
{
    int n;
    printf("Enter a no: ");
    scanf("%d",&n);
    Oddnatural(n);
    return 0;
}

int Oddnatural(int x)
{
    if(x>1)
    Oddnatural(x-1);
    printf("%d ",x+x-1);  //3. odd no.
    
} 