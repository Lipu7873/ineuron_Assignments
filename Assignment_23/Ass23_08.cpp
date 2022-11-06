/* 8. Write a C++ program to swap values of two int variables without using third variable */
#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter two no: ";
    cin>>x>>y;
    cout<<"x:"<<x<<" "<<"y:"<<y<<endl<<endl;
    x=x+y;
    y=x-y;
    x=x-y;
    cout<<"x:"<<x<<" "<<"y:"<<y;
    return 0;
}
