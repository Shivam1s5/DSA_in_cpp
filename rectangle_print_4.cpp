#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cout<<"Enter Number Of Rows: ";
    cin>>r;
    cout<<"Enter Number Of Columns: ";
    cin>>c;
    int count=0;
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            count++;//here instead of using count variable we can simply use: cout<<((i-1)*c)+j<<" ";
            cout<<count<<" ";
        }
        cout<<endl;
    }
}