// 8. Write a recursive function to print binary of a given decimal number

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
   
    if(x>0)
    {
    reverse(x/2);
     printf("%d",x%2);
    }
    
}