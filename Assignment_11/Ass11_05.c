/*5. Write a function to print first N prime numbers (TSRN)*/
#include<stdio.h>
void prime (int);
int main()
{
    int n;
    printf("Enter a no:- ");
    scanf("%d",&n);
    prime(n);
}
void prime(int x)
{   int n=0,i=1,ct=0,j=1;
    while(n<x)  
    {  
        j=1;  
        ct=0;  
        while(j<=i)  
        {  
            if(i%j==0)  
            ct++;  
            j++;   
        }  
        if(ct==2)  
        {  
            printf("%d ",i);  
            n++;  
        }  
        i++;  
    }  
}