#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cout<<"Enter The Number Of Rows: ";
    cin>>r;
    cout<<"Enter The Number of Columns: ";
    cin>>c;
    for(int i=1;i<=r;i++)//for printing row number in reverse change it as for(r;r>0;r--)and print r.
    {
        for(int j=c;j>0;j--)
        {
            cout<<j<<" ";//for printing row numbers as alphabet use:
                        //char ch=64+i; cout<<ch<<" ";
        }
        cout<<endl;
    }
}