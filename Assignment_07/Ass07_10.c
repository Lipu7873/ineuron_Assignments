//10. Write a program to print all Armstrong numbers under 1000
#include<stdio.h>
int main()
{
    int s,r,i,m;
    printf("The Armstrong Numbers are: ");
    for(i=1;i<=1000;i++){
    s=0;
    m=i;
    while (m!=0)
    {
         r=m%10;
        s=s+r*r*r;
        m=m/10;
    }
    if(s==i)
    {
    printf("%d\n",i);
    }
    }
    return 0;
}