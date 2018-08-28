#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include"time.cpp"
using namespace std;
// global object
Time glob(5000);
Time glob1(6000);
void getseconds(int sec)
{
	// object in global function
	static Time t(sec);
	t.uni();
	t.stand();
}
int main()
{
	int sec;
	// object in main()
	Time t1;
	cout<<"\nEnter the seconds : ";
	cin>>sec;
	getseconds(sec);
	t1.getsec();
	t1.uni();
	t1.stand();
	cout<<endl;
}
