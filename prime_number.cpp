#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Number to Check Whether Prime Or Not: ";
    cin>>n;
    if(n<2)
    {
        cout<<"Not Prime Number";
        return 0;
    }
    else
    {
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
            {
                cout<<"Not Prime";
                return 0;
            }
        }
        cout<<"Yes it's a Prime Number.";
        return 0;
    }
}