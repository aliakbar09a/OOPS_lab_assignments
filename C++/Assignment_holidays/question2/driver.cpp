#include<iostream>
#include"Package.cpp"
using namespace std;
int main()
{
    double weight, rate, flat_fee, extra_rate;
    cout<<"\nEnter the weight for shipping : ";
    cin>> weight;
    cout<<"\nEnter the cost per kg for shipping : ";
    cin>>rate;
    Package P(weight, rate);
    cout<<"\nThe base cost of shipping : $"<< P.CalculateCost();
    cout<<"\nEnter the flat fee for two day delivery : ";
    cin>> flat_fee;
    TwoDayPackage Q(weight, rate, flat_fee);
    cout<<"\nThe cost of shipping in Two Day : $"<< Q.CalculateCost();
    cout<<"\nEnter the extra cost per kg for overnight delivery : ";
    cin>> extra_rate;
    OvernightPackage R(weight, rate, extra_rate);
    cout<<"\nThe cost of shipping in Overnight : $"<< R.CalculateCost();
    cout<<endl;

}
