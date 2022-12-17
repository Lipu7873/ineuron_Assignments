/* 3. Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ] */
#include<stdio.h>
void sort(int*,int);
int main()
{
    int a[20],i;
    for(i=0;i<10;i++)
    scanf("%d",(a+i));

    sort(a,10);
}
void sort(int *p,int size)
{
    int i,j,swap;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
        if(*(p+i)>=*(p+j))
            {
                swap=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=swap;
            }
        }
    }
    for(i=0;i<size;i++)
    printf("%d ",*(p+i));
}