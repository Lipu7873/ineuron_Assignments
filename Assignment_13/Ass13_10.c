/* 10. Write a program in C to calculate the power of any number using recursion. */
#include<stdio.h>
int main()
{
    int n,m,ans;
    printf("Enter a base no: ");
    scanf("%d",&n);
    printf("Enter a exponent:");
    scanf("%d",&m);
    ans=power(n,m);
    printf("%d",ans);
}
int power(int x,int y){
        if(y==0)
        return 1;
        if(x==0)
        return 0;
       return x*power(x,y-1);
    
}