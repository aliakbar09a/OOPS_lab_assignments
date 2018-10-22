#include<iostream>
#include"SavingsAccount.cpp"
using namespace std;
float SavingsAccount::annualInterestRate = 3;
int main()
{
    SavingsAccount saver1(2000.0, 3.0), saver2(3000.0, 3.0);
    float monthInterest;
    monthInterest = saver1.calculateMonthlyInterest();
    cout<<"\nThe monthly interest of saver1 is : $"<<monthInterest;
    cout<<"\nThe new balance of saver1 is : $"<<saver1.getDeposit();
    monthInterest = saver2.calculateMonthlyInterest();
    cout<<"\nThe monthly interest of saver2 is : $"<<monthInterest;
    cout<<"\nThe new balance of saver2 is : $"<<saver2.getDeposit();

    cout<<"\n\nChanging the annual interest rate to 4% instead of 3%\n";
    saver1.modifyInteresRate(4.0);

    monthInterest = saver1.calculateMonthlyInterest();
    cout<<"\nThe monthly interest of saver1 is : $"<<monthInterest;
    cout<<"\nThe new balance of saver1 is : $"<<saver1.getDeposit();
    monthInterest = saver2.calculateMonthlyInterest();
    cout<<"\nThe monthly interest of saver2 is : $"<<monthInterest;
    cout<<"\nThe new balance of saver2 is : $"<<saver2.getDeposit();

}
