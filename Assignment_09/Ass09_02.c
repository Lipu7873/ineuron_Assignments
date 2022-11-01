/*2. Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch,a,b;
    while (1)
    {
    printf("a. Addition\n");
    printf("b. Subtraction\n");
    printf("c. Multiplication\n");
    printf("d. Division\n");
    printf("e. Exit\n");
    printf("Enter your choice....\n");
    scanf("%c",&ch);
    switch (ch)
    {
    case 'a':
        printf("Enter two no: ");
        scanf("%d%d",&a,&b);
        printf("sum is %d",a+b);
        break;
    case 'b':
        printf("Enter two no: ");
        scanf("%d%d",&a,&b);
        printf("subtraction is %d",a-b);
        break;
    case 'c':
        printf("Enter two no: ");
        scanf("%d%d",&a,&b);
        printf("multiple is %d",a*b);
        break;
    case 'd':
        printf("Enter two no: ");
        scanf("%d%d",&a,&b);
        printf("Division is %d",a/b);
        break;
    case 'e':
       exit (0);
        break;
    
    default:
    printf("INVALID CHOICES");
        break;
    }
    }
    return 0;
}