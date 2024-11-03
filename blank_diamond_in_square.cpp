#include<iostream>
using namespace std;
int main()
{
    int r;
    cout<<"Enter The Number Of Rows: ";
    cin>>r;
    cout<<endl;
    for(int i=r;i>0;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*"<<" ";
        }
        for(int blank=1;blank<=2*(r-i);blank++)
        {
            cout<<" "<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*"<<" ";
        }
        for(int blank=1;blank<=2*(r-i);blank++)
        {
            cout<<" "<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}