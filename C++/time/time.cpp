#include<iostream>
#include<string>
using namespace std;

class Time
{
	public:
		Time()
		{
			cout<<"\nDefault constructor called";
			sec = 0;
		}
		~Time()
		{
			cout<<"\nDestructor called";
		}
		Time(int s)
		{
			cout<<"\nParameterized constructor called";
			sec = s;
		}
		void getsec()
		{
			cout<<"\nEnter the sec : ";
			cin>>sec;
		}
		void uni()
		{
			int hr, min, secs;
			hr = sec / 3600;
			min = sec % 3600 / 60;
			secs = sec% 60;
			hr = hr % 24;
			cout<<"\nThe Universal Time is : "<< hr <<" hrs "<< min <<" mins "<< secs<<" secs";
		}
		void stand()
		{
			int hr, min, secs;
			string a;
			hr = sec/ 3600;
			min = sec % 3600 / 60;
			secs = sec% 60;
			hr / 12 == 1? a = "PM": a = "AM";
			hr = hr % 12;
			cout<<"\nThe Standard time is : "<< hr <<" hrs "<< min <<" mins "<< secs<<" secs "<<a<<endl<<endl;
		}
	private:
		int sec;
};
