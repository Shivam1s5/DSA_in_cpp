#include<iostream>
using namespace std;
int main()
{
    int n,num,fact=1;
    cout<<"Enter Number To Find it's Factorial: ";
    cin>>n;
    num=n;
    for(n;n>0;n--)
    {
        fact*=n;
    }
    cout<<"Factorial of "<<num<<" = "<<fact;
}