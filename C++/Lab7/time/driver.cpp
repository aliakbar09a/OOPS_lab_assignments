#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include"time.cpp"
using namespace std;
int main()
{
	int sec, choice, amount, increment;
	Time t1;
	t1.getsec();
	t1.uni();
	t1.stand();
    cout<<"\nEnter the choice of increment : ";
    cout<<"\n1.secs\t2.minutes\t3.Hrs\t4.days\n";
    cin>>choice;
    cout<<"Enter the amount : ";
    cin>>amount;
    increment = amount;
    if(choice == 2)
        increment = amount * 60;
    else if(choice == 3)
        increment = amount * 3600;
    else if(choice == 4)
        increment = amount * 86400;
    while(increment > 0)
    {
        t1.tickTime();
        increment--;
    }
    t1.uni();
    t1.stand();
	cout<<endl;
}
