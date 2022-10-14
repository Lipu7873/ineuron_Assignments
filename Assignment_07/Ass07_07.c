//7. Write a program to print all Prime numbers between two given numbers.
#include<stdio.h>
int main()
{
    int x,y,z,i;
    printf("Enter two no: ");
    scanf("%d%d",&x,&y);
    for(z=x+1;z<=y-1;z++)
    {
        for(i=2;i<z;i++)
        {
            if(z%i==0)
            break;
        }
        if(i==z)
        printf("%d ",z);
    }
}