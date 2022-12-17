/* 8. Write a program to compute the sum of all elements in an array using pointers. 
*/
#include<stdio.h>
void input (int*,int);
int sum_Array(int*,int);
int main()
{
    int a[10],sum;
    input(a,10);
   sum= sum_Array(a,10);
   printf("Sum of the array is %d ",sum);
    return 0;

}

void input(int *p,int size)
{
    int i;
    printf("Enter %d numbers: ",size);
    for(i=0;i<size;i++)
    scanf("%d",p+i);
}
int sum_Array(int *p,int size)
{
    int i,sum=0;
    for(i=0;i<size;i++)
    {
        sum=sum+*(p+i);
    }
    return sum;
}