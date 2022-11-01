/*9. Write a program to calculate LCM of two numbers*/
#include<stdio.h>
int main()
{
    int x,y,lcm,i;
    printf("Enter two no: ");
    scanf("%d%d",&x,&y);
    for(i=1;i<x*y;i++)
    {
        if(i%x==0&&i%y==0)
        break;
    }
    printf("%d",i);
    return 0;
}