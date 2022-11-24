/* 10. Write a recursive function to print reverse of a given number */

 #include<stdio.h>
void reverse(int );
int main()
{
    int x;
    printf("Enetr a no: ");
    scanf("%d",&x);
    reverse(x);
    return 0;
}

void reverse(int x)
{
    printf("%d",x%10);
    x=x/10;
    if(x==0)
    return;
    reverse(x);
}