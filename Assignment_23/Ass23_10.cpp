/* 10. Write a C++ program to add all the numbers of an array of size 10. */
#include<iostream>
using namespace std;
int main()
{
    int a[10],i,sum=0;
    cout<<"Enter values of array: ";
    for(i=0;i<10;i++)
    {
    cin>>a[i];
    sum=sum+a[i];
    }
    cout<<"sum of the array is "<<sum;
    return 0;
}