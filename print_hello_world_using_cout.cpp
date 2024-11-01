#include<iostream>
int main(){
    std::cout<<"hello shivam\n";
    int a=5;
    std::cout<<a,"\n";//this will not work therefore trying another way;
    std::cout<<a<<"\n";//now checking the output we get:
    std::cout<<a;
}