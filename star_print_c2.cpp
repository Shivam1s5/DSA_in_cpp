#include<iostream>
using namespace std;
int main()
{
    int r;
    cout<<"Enter The Number Of Rows You Want: ";
    cin>>r;
    for(int i=1;i<=r;i++)
    {
        for(int blank=r-i;blank>0;blank--)
        {
            cout<<" "<<"";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<j<<"";
        }
        for(int j=i-1;j>0;j--)
        {
            cout<<j<<"";
        }
        cout<<endl;
    }
}