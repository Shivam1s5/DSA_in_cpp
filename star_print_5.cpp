#include<iostream>
using namespace std;
int main()
{
    int r;
    cout<<"Enter The Number Of Rows: ";
    cin>>r;
    for(int i=r;i>0;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j<<"";
        }
        cout<<endl;
    }
}