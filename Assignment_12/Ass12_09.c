// 9. Write a recursive function to print octal of a given decimal number

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
    reverse(x/8);
     printf("%d",x%8);
    }
    
}