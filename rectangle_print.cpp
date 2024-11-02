#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cout<<"Enter Number of Rows: ";
    cin>>r;
    cout<<"Enter Number of Columns: ";
    cin>>c;
    for(int i=1;i<=r;i++)
    {
        int j=1;
        while(j<=c)
        {
            cout<<"*"<<" ";
            //here for printing row numbers instead of stars use cout<<i<<" " and for printing column number use cout<<j<<" ";
            j++;
        }
        cout<<endl;
    }
}