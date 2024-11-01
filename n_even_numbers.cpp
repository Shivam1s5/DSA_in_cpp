#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    cout<<"Enter Number:\n";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            count+=1;
        }
        else
        {
            continue;
        }
    }
    cout<<"The Number of Even Numbers from 1 to "<<n<<" are : "<<count<<"\n";
}