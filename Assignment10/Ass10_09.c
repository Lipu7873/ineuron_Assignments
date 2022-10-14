// 9. Write a function to check whether a given number contains a given digit or not.(TSRS)
#include<stdio.h>
int Have_digit(int,int);
int main()
{
    //printf("Welcome to Online IDE!! Happy Coding :)");
    int x,y,z;
    printf("Enter a number and a digit");
    scanf("%d%d",&x,&y);
    z=Have_digit(x,y);
    printf("%d",z); //Note: print 1 for Yes and print 0 for No.
}
 int Have_digit(int n,int m)   
    {
    int rem,i;
    for(i=1;i<=n; )
    {
      rem=n%10;
      if(rem==m)
      {
          return 1;
      }
        n=n/10;
    }
    
    return 0;
}