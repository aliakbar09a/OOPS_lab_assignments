#include<iostream>
#include"Account.cpp"
using namespace std;
int main()
{
    double balance, interest, fee, amount;
    cout<<"\nEnter the balance : ";
    cin>>balance;
    Account A(balance);
    cout<<"\nThe balance in Savings Account is : "<<A.getBalance();
    cout<<"\n\nEnter the Interest rate in % : ";
    cin>>interest;
    SavingsAccount S(balance, interest);
    S.Credit(S.CalculateInterest());
    cout<<"\nBalance after adding the interest : "<<S.getBalance();
    cout<<"\n\nEnter the transaction fee : ";
    cin>>fee;
    CheckingAccount C(S.getBalance(), fee);
    cout<<"\nEnter the amount you want to credit : ";
    cin>>amount;
    C.Credit(amount);
    cout<<"\nThe final balance is : "<<C.getBalance();
    cout<<endl;
}
