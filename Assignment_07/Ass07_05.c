/*5. Write a program to check whether two given numbers are co-prime
numbers or not*/
#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter two no: ");
    scanf("%d%d",&x,&y);
    z=x<y;x:y;
    int i;
    for(i=2;i<=z;i++)
    {
        if(x%i==0 && y%i==0)
        break;
    }

    if(i==z+1)
        printf("co-prime");
    else
    printf("not a co-prime");
    return 0;
}