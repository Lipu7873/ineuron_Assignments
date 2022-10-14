/* 12. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and
convert it into USD.*/
#include<stdio.h>
int main()
{
    int n,USD=1;
    float INR=76.23,One_INR;
    One_INR=USD/INR;
    printf("Enter amount is INR");
    scanf("%d",&n);
    printf("%d INR is %.2f USD",n,n*One_INR);
    return 0;

}
