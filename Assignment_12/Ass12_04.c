/* 4. Write a recursive function to print first N odd natural numbers in reverse order */

#include<stdio.h>
int Oddnaturev (int);
int main()
{
    int n;
    printf("Enter a no: ");
    scanf("%d",&n);
    Oddnaturev(n);
    return 0;
}

int Oddnaturev(int x)
{
    printf("%d ",x+x-1);    //4. reverse odd no
    if(x>1)
    Oddnaturev(x-1);
} 