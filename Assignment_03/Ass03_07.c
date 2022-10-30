/*7. Write a program to check whether roots of a given quadratic equation are real &
distinct, real & equal or imaginary roots*/
#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter three no: ");
    scanf("%d%d%d",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if(d>0)
    printf("real & distinct");
    else if(d==0)
    printf("real & equal");
    else
    printf("imaginary root");

    return 0;
}