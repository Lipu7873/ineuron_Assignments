/*4. Write a function to find the next prime number of a given number. (TSRS)*/
#include<stdio.h>
void Next_prime(int);
int main()
{
    int n,m;
    printf("Enter a no: ");
    scanf("%d",&n);
    Next_prime(n);
}
void Next_prime(int n)
{
     for(int x=n;1;x++)
        {
          int  flag=0;
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

}