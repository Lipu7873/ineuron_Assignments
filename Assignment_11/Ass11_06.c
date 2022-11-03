/*6. Write a function to print all Prime numbers between two given numbers. (TSRN)*/
#include<stdio.h>
void prime_between(int,int);
int main()
{
    int a,b;
    printf("Enter two no.: ");
    scanf("%d%d",&a,&b);
    prime_between(a,b);
}
void prime_between(int x,int y)
{
    int z,i;
    for(z=x+1;z<=y-1;z++)
    {
        for(i=2;i<z;i++)
        {
            if(z%i==0)
            break;
        }
        if(i==z)
        printf("%d ",z);
    }
}