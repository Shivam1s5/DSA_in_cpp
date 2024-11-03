#include<iostream>
using namespace std;
int main()
{
    int r;
    cout<<"Enter The Number Of Rows:";
    cin>>r;
    for(int i=1;i<=r;i++)
    {
        for(int blanks=1;blanks<=r-i;blanks++)
        {
            cout<<" "<<"";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    for(int i=r;i>0;i--)
    {
        for(int blank=1;blank<=r-i;blank++)
        {
            cout<<" "<<"";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}