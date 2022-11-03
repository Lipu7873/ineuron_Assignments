/*3. Write a function to check whether a given number is Prime or not. (TSRS)*/
#include<stdio.h>
int prime (int);
int main()
{
    int n,p;
    printf("Enter a no: ");
    scanf("%d",&n);
    p=prime(n);
    if(p==1)
    printf("Not a prime");
    else
    printf("prime");
    return 0;
}
int prime(int x)
{
    int i,flag=0;
    for(i=2;i<=x/2;i++)
    {
        if(x%i==0)
        flag=1;
        break;
    }
    return flag;

}
