#include<iostream>
using namespace std;
int main()
{
    int r;
    cout<<"Enter The Number Of Rows: ";
    cin>>r;
    for(int i=1;i<=r;i++)
    {
        for(int j=i;j>0;j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}