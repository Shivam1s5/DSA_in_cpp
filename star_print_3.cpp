#include<iostream>
using namespace std;
int main()
{
    int r;
    cout<<"Enter The Number Of Rows: ";
    cin>>r;
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=i;j++)
        {
            char ch=64+i;
            cout<<ch<<"";
        }
        cout<<endl;
    }
}