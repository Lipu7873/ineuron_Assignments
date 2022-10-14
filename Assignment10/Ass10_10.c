/* 10. Write a function to print all prime factors of a given number. For example, if the
number is 36 then your result should be 2, 2, 3, 3. (TSRN)*/
#include<stdio.h>
void primeFactors(int);
int main()
{
    int n;
    printf("Enter a no.");
    scanf("%d",&n);
    primeFactors(n);
}
void primeFactors(int m)
    {
        int i;
        for(i=2;m>1;i++)
        {
        while (m%i==0)
        {
            printf("%d ",i);
            m=m/i;
        }
        }
    }