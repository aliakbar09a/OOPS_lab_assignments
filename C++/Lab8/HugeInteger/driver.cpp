#include<iostream>
#include"HugeInteger.cpp"
using namespace std;
int main()
{
    HugeInteger a;
    int x;
    a.input();
    HugeInteger b;
    b.input();
    a.isEqualTo(b);
    // a.output();
    // cout<<"\n Enter the number to be subtracted to 40 digit number : ";
    // cin>>x;
    // a.subtract(x);
    // a.output();
}
