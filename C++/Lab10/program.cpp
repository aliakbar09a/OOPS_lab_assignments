#include<iostream>
#include<string>
using namespace std;
class phone
{
    long long mob;
    long long landline;
public:
    phone()
    {
        cout<<"\nEnter the mobile no. : ";
        cin>>mob;
        cout<<"\nEnter the phone no. : ";
        cin>>landline;
    }
    long long getmob()
    {
        return mob;
    }
    long long getland()
    {
        return landline;
    }
};
class date
{
    int day;
    int month;
    int year;
public:
    date()
    {
        cout<<"\nEnter the day : ";
        cin>>day;
        cout<<"\nEnter the month : ";
        cin>>month;
        cout<<"\nEnter the year : ";
        cin>>year;
    }
    int getday()
    {
        return day;
    }
    int getmonth()
    {
        return month;
    }
    int getyear()
    {
        return year;
    }
};
class emp
{
    int id;
    string name;
    date doj;
    phone ph;
public:
    emp()
    {
        cout<<"\nEnter the id : ";
        cin>>id;
        cout<<"\nEnter the name : ";
        cin>>name;
    }
    emp(int n, string fname)
    {
        id = n;
        name = fname;
    }
    friend ostream & operator << (ostream &out, const emp &);
    friend istream & operator >> (istream &in, emp &);
    // istream & operator >> (istream & in, emp & s)
    // {
    //     in>>
    // }
};
ostream & operator << (ostream &out, const emp &s)
{
    out<<"\nId : ";
    out<<s.id;
    out<<"\nName : ";
    out<<s.name;
    out<<"\nDate of joining : "<<s.doj.getday()<<"/"<<s.doj.getmonth()<<"/"<<s.doj.getmonth();
    out<<"\nMob no. : "<<s.ph.getmob();
    out<<"\nLandline no. : "<<s.ph.getland();
}
