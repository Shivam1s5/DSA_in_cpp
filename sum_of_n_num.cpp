#include<iostream>
using namespace std;
int main()
{
    int sum=0,product=1;
    int n;
    cout<<"Enter The Number Upto Which You Want Sum And Product: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        sum+=i;
        product*=i;
    }
    cout<<"\n"<<"The Sum of "<<n<<" Natural Numbers = "<<sum<<"\nAnd The Product of "<<n<<" Natural Numbers = "<<product; 
}