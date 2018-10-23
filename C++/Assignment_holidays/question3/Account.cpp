#include<iostream>
using namespace std;
class Account
{
public:
    double balance;
    Account(double bal)
    {
        balance = bal;
    }
    void Credit(double add)
    {
        balance = balance + add;
    }
    void Debit(double subt)
    {
        if(subt>balance)
            cout<<"\ndebit amount exceed account balance";
        else
            balance -= subt;
    }
    double getBalance()
    {
        return balance;
    }
};
class SavingsAccount : public Account
{
    double interest;
public:
    SavingsAccount(double bal, double rate) : Account(bal)
    {
        interest = rate;
    }
    double CalculateInterest()
    {
        return balance * interest / 100;
    }
};
class CheckingAccount : public Account
{
    double transaction_fee;
public:
    CheckingAccount(double bal, double fee) : Account(bal)
    {
        transaction_fee = fee;
    }
    void Credit(double add)
    {
        if(balance + add < transaction_fee)
            cout<<"\nTransaction fee exceeds the total balance after credit";
        else
            Account::Credit(add);
            Account::Debit(transaction_fee);
    }
    void Debit(double subt)
    {
        if(subt + transaction_fee > balance)
            cout<<"\ndebit amount exceed account balance";
        else
            Account::Debit(subt);
            Account::Debit(transaction_fee);
    }
};
