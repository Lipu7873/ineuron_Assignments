/*10. C program to find all roots of a quadratic equation using switch case*/
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d;
    float root_part,deno,squar_root;
    printf("Enter 3 no: ");
    scanf("%f%f%f",&a,&b,&c);
    d=(b*b)-(4*a*c);
    root_part=sqrt(b*b-4*a*c);
    deno=2*a;
    switch (d>0)
    {
    case 1:
       squar_root= (-b + root_part)/deno;
       printf("squar_root is %f",squar_root);
        break;
    
    case 0:switch (d<0)
    {
            case 1:
              squar_root = (-b-root_part)/deno;
                  printf("squar_root is %f",squar_root);
                break;
    
            case 0: squar_root= -b/deno;
                      printf("squar_root is %f",squar_root);
                break;
    }
        break;
    }
}