/*10. Write a program which takes the cost price and selling price of a product from the
user. Now calculate and print profit or loss percentage.*/
#include<stdio.h>
int main()
{
    float cp,sp,get;
    printf("Enter the cp and sp");
    scanf("%f%f",&cp,&sp);
    get=sp-cp;
    if(sp>cp)
    printf("%2.f%% profit",(get*100)/cp);
    else
    printf("%2.f%% Losses",(get*100)/cp);
    return 0;
}