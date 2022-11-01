/*3. Write a program to calculate the sum of all even numbers and sum of all odd
numbers, which are stored in an array of size 10. Take array values from the user.*/
#include<stdio.h>
int main()
{
    int a[10],i,se=0,so=0;
    printf("Enter 10 nos: ");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    for(i=0;i<=9;i++)
    {
        if(a[i]%2==0)
        se=se+a[i];
        else
        so=so+a[i];
    }
    printf("sum of the even no. is: %d\n",se);
    printf("sum of the odd no is: %d",so);
    return 0;
}