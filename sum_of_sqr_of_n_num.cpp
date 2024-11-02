#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter The Number upto Which You Want sum of Sqr of Natural Numbers: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        sum=sum+(i*i);
    }
    cout<<"\nSum of Square of "<<n<<" Natural Numbers = "<<sum;
}