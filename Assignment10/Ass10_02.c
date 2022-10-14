// 2.Write a function to calculate simple interest. (TSRS) !!!!Not solved!!!!
#include<stdio.h>
float simple_interest(int);
int main()
{
    int P;//princpal amount && time
    float A;//interest
    printf("Enter the principal amount");
    scanf("%d",&P);
    A=simple_interest(P);
    printf("the simple interest ammount is %.2f",A);
    return 0;
}
float simple_interest(int p)
{
    float A,i;
    int t;
    printf("Enter interest per month");
    scanf("%f",&i);
    printf("Enter time period");
    scanf("%d",&t);
    A=p*i*t/100;
    return A;
}