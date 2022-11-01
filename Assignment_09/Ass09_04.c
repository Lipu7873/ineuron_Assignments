/*4. Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an
isosceles triangle or not
b. Check whether a given set of three numbers are lengths of sides of
a right angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle
or not
d. Exit*/
#include<stdio.h>
int main()
{
    int choice,a,b,c;
    while (1)
    {
       printf("\n\n############################################## \n\n");
    printf("\nEnter Your choice: \n");
    printf("1. check the triangle is an isosceles triangle or not\n");
    printf("2. check the triangle is right angled triangle or not\n");
    printf("3. check the triangle is equilateral triangle or not\n");
    printf("4. Exit\n");
    scanf("%d",&choice);

    printf("the length of 3 side of triangle is: \n");
    scanf("%d%d%d",&a,&b,&c);
    switch (choice)
    {
    case 1:
        if(a==b||b==c||c==a)
        printf("isosceles triangle");
        else
        printf("not an isosceles triangle");
        break;
    case 2:
        if(a*a==b*b+c*c ||c*c==a*a+b*b || b*b==a*a+c*c)
        printf("right angled triangle");
        else
        printf("not a right angled trianglee");
        break;
    case 3:
        if((a==b)&&(b==c))
        printf("equilateral triangle");
        else
        printf("not an equilateral triangle");
    case 4:
        return 0;
    default:
        printf("Invlid choice");
        break;
    }
    }
    
   
    return 0;
}