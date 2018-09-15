#include<iostream>
#include<string>
using namespace std;

class Time
{
	public:
		Time()
		{
			sec = 0;
		}

		Time(int s)
		{
			sec = s;
		}
        void tickTime()
        {
            sec = sec + 1;
        }
		void getsec()
		{
			cout<<"\nEnter the sec : ";
			cin>>sec;
		}
		void uni()
		{
			int days, hr, min, secs;
			hr = sec / 3600;
            days = hr / 24;
			min = sec % 3600 / 60;
			secs = sec% 60;
			hr = hr % 24;
			cout<<"\nThe Universal Time is : "<<days<<" days "<< hr <<" hrs "<< min <<" mins "<< secs<<" secs";
		}
		void stand()
		{
			int days, hr, min, secs;
			string a;
			hr = sec/ 3600;
            days = hr/24;
			min = sec % 3600 / 60;
			secs = sec% 60;
			hr / 12 == 1? a = "PM": a = "AM";
			hr = hr % 12;
			cout<<"\nThe Standard time is : "<<days<<" days "<< hr <<" hrs "<< min <<" mins "<< secs<<" secs "<<a<<endl<<endl;
		}
	private:
		int sec;
};
