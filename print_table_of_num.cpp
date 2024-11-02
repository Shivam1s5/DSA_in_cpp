#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Number to Print It's Table: ";
    cin>>n;
    for(int i=1;i<=10;i++)
    {
        cout<<"\n"<<n<<"*"<<i<<" = "<<n*i;
    }
}