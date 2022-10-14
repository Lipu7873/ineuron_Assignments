//1. Write a function to calculate the area of a circle. (TSRS)
#include<stdio.h>
float area_circle(int);
int main()
{
    int r;
    float area;
    printf("Enter the radius of the circle");
    scanf("%d",&r);
    area=area_circle(r);
    printf("area of the circle is %.2f",area);
}
float area_circle(int x)
{
    float area;
    area=3.141*x*x;
    return area;
}
