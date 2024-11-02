#include<iostream>
using namespace std;
int main()
{
    int r;
    cout<<"Enter Number Of Rows: ";
    cin>>r;
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*"<<"";
            //for printing column number print j instead of star and for printing row number print i instead of star.
        }
        cout<<endl;
    }
}