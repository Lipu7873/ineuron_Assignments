// 4. Write a function to print first N natural numbers (TSRN)
#include<stdio.h>
void natural_no(int);
int main()
    {
int n;
printf("Enter a number");
scanf("%d",&n);
natural_no(n);
return 0;
    }
void natural_no(int a)
{
    int i;
    for(i=1;i<=a;i++)
    {
        printf("%d ",i);
    }
} 