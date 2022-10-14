/*3. Write a program to check whether a given number is there in the Fibonacci
series or not.*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int prev=0,cur=1,next=0;
    int n;
    printf("Enter a no: ");
    scanf("%d",&n);
    if(n==1)
    {
        printf("number found");
        exit(0);
    }
    for(int i=0;1;i++)
            {
       next=prev + cur;
        prev=cur;
        cur=next;
        if(next ==n )
                {
            printf("Number found");
            break;
                }
        if(next>n)
        {
        printf("not found");
        break;
        }
            
        
    
    }

    return 0;
}