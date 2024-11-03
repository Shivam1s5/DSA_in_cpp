#include<iostream>
using namespace std;
int main()
{
    int r;
    cout<<"Enter The Number of Rows:";
    cin>>r;
    for(int i=1;i<=r;i++)
    {
        for(int blank=1;blank<=r-i;blank++)
        {
            cout<<" "<<"";
        }
        for(int j=1;j<=(2*i)-1;j++)
        {
            cout<<"*"<<"";
        }
        cout<<endl;
    }
    for(int i=r;i>0;i--)
    {
        for(int blank=1;blank<=r-i;blank++)
        {
            cout<<" "<<"";
        }
        for(int j=1;j<=(2*i)-1;j++)
        {
            cout<<"*"<<"";
        }
        cout<<endl;
    }
}