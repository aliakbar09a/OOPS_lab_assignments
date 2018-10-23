using namespace std;
#include<iostream>
class Package
{
    string sender_name;
    string sender_address;
    string sender_city;
    string sender_state;
    long sender_zip;
    string receiver_name;
    string receiver_address;
    string receiver_city;
    string receiver_state;
    long receiver_zip;
public:
    double weight;
    double cost_per_kg;
    Package()
    {
        sender_name = "unavailable";
        sender_address = "unavailable";
        sender_city = "unavailable";
        sender_state = "unavailable";
        sender_zip = 000000;
        receiver_name = "unavailable";
        receiver_address = "unavailable";
        receiver_city = "unavailable";
        receiver_state = "unavailable";
        receiver_zip = 000000;
        weight = 0;
        cost_per_kg = 0;
    }
    Package(string sender_name, string sender_address, string sender_city, string sender_state,
            long sender_zip, string receiver_name, string receiver_address, string receiver_city,
            string receiver_state, long receiver_zip, double weight, double cost_per_kg)
    {
        this->sender_name = sender_name;
        this->sender_address = sender_address;
        this->sender_city = sender_city;
        this->sender_state = sender_state;
        this->sender_zip = sender_zip;
        this->receiver_name = receiver_name;
        this->receiver_address = receiver_address;
        this->receiver_city = receiver_city;
        this->receiver_state = receiver_state;
        this->receiver_zip = receiver_zip;
        this->weight = weight;
        this->cost_per_kg = cost_per_kg;
        checkPositive(weight, cost_per_kg);
    }
    Package(double weight, double cost_per_kg)
    {
        if(checkPositive(weight, cost_per_kg))
        {
            this->weight = weight;
            this->cost_per_kg = cost_per_kg;
        }
        else
        {
            this->weight = 0;
            this->cost_per_kg = 0;
        }
    }
    bool checkPositive(double weight, double rate)
    {
        if (weight < 0 || rate < 0)
        {
            cout<<"\nThe weight or cost per kg cannot be negative";
            return false;
        }
        return true;
    }
    double CalculateCost()
    {
        return weight * cost_per_kg;
    }

};

class TwoDayPackage : private Package
{
    double flat_fee;
public:
    TwoDayPackage(double weight, double rate, double flat) : Package(weight, rate)
    {
        flat_fee = flat;
    }
    double CalculateCost()
    {
        return (weight * cost_per_kg) + flat_fee;
    }
};
class OvernightPackage : private Package
{
    double extra_cost_per_kg;
public:
    OvernightPackage(double weight, double rate, double extra) : Package(weight, rate)
    {
        extra_cost_per_kg = extra;
    }
    double CalculateCost()
    {
        return weight * (cost_per_kg + extra_cost_per_kg);
    }
};
