#include<iostream>
using namespace std;
int main()
{
    int r;
    cout<<"Enter The Number Of Rows You Want: ";
    cin>>r;
    for(int i=1;i<=5;i++)
    {
        for(int blank=r-i;blank>0;blank--)
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