#include<iostream>
using namespace std;
int main()
{
    int r;
    cout<<"Enter Number of Rows You Want: ";
    cin>>r;
    for(int i=1;i<=r;i++)
    {
        for(int blank=r-i;blank>0;blank--)
        {
            cout<<" "<<"";
        }
        for(char ch=65;ch<=65+(i-1);ch++)
        {
            cout<<ch<<"";
        }
        cout<<endl;
    }
}