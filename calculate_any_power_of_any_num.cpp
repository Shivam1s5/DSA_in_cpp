#include<iostream>
using namespace std;
int main()
{
    int n,pow,num;
    cout<<"Enter the Number And Power to Calculate Result: ";
    cin>>n>>pow;
    num=n;
    for(int i=1;i<pow;i++)
    {
        n*=num;
    }
    cout<<"\n"<<num<<" to The Power "<<pow<<" = "<<n;
}