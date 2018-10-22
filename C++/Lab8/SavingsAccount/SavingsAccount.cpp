#include<iostream>
using namespace std;
class SavingsAccount
{
    float savingsBalance;
public:
    static float annualInterestRate;
    SavingsAccount()
    {
        savingsBalance = 0;
    }
    SavingsAccount(float balance, float interest)
    {
        savingsBalance = balance;
    }
    float calculateMonthlyInterest()
    {
        float monthlyInterest;
        monthlyInterest = (savingsBalance * annualInterestRate) / (12 *100);
        savingsBalance = savingsBalance - monthlyInterest;
        return monthlyInterest;
    }
    static void modifyInteresRate(float newRate)
    {
        annualInterestRate = newRate;
    }
    float getDeposit()
    {
        return savingsBalance;
    }
};
