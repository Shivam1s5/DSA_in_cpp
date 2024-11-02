#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cout<<"Enter Number Of Rows : ";
    cin>>r;
    cout<<"Enter Number of Columns : ";
    cin>>c;
    for(r;r>0;r--)
    {
        for(int j=1;j<=c;j++)
        {
            char ch=64+j;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}