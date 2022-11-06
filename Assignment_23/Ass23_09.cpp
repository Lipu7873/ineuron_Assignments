/* 9. Write a C++ program to find the maximum of two numbers. */
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two no: ";
    cin>>a>>b;
    if(a>b)
    cout<<"Max is "<<a;
    else
    cout<<"Max is "<<b;
    return 0;
}