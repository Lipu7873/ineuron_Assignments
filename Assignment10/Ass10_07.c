/* 7. Write a function to calculate the number of combinations one can make from n items
and r selected at a time. (TSRS)*/

#include<stdio.h>
long fact_n(long);
long fact_r(long);
long fact_n_r(long ,long);
int main()
{
    long n,r,Fact_n,Fact_r,combination;
    long Fact_n_r;
    printf("Enter two no.");
    scanf("%ld%ld",&n,&r);
    Fact_n=fact_n(n);
    Fact_r=fact_r(r);
    Fact_n_r=fact_n_r(n,r);
    printf("factorial of %ld is %ld",n,Fact_n);
    printf("\nfactorial of %ld is %ld",r,Fact_r);
    combination=Fact_n/(Fact_r*Fact_n_r);
    printf("\ncombination is %ld",combination);
    return 0;
}
long fact_n(long m)
{
    long i,j=1;
    for(i=1;i<=m;i++)
    {
        j=j*i;
    }
    return j;
}
long fact_r(long p)
{
    long i,j=1;
    for(i=1;i<=p;i++)
    {
        j=j*i;
    }
    return j;
}
long fact_n_r(long m,long p)
{
    long i,q,s=1;
    q=m-p;
    for(i=1;i<=q;i++)
    {
        s=s*i;
    }
    return s;
}