// 8. Write a program to find next Prime number of a given number.
#include<stdio.h>
int main()
    {
        int x,n,flag=0;
        printf("Enter a no: ");
        scanf("%d",&n);
        for(x=n;1;x++)
        {
            flag=0;
            for(int i=2;i<=x/2;i++)
            {
                if(x % i == 0)
                flag=1;
            }
            if(flag==0)
            {
            printf("%d",x);
            break;
            }
        }
        return 0;
    }