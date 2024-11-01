#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter your percentage:\n";
    cin>>marks;
    if(marks<33.33)
    {
        cout<<"You failed";
    }
    else if(marks>33.33)
    {
        cout<<"You passed";
    }
    else
    {
        cout<<"invalid percentage";
    }
}