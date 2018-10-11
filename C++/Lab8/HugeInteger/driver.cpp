#include<iostream>
#include"HugeInteger.cpp"
using namespace std;
int main()
{
    HugeInteger a, b;
    int x, choice1, choice2;
    cout<<"\nEnter the first big digit number : ";
    a.input();
    cout<<"\nEnter the second big digit number : ";
    b.input();
    choice1 = 0;
    while(choice1 != 4)
    {
        cout<<"\nEnter the choice :\n1.Add\n2.Subtract\n3.Compare\n4.Quit\n";
        cin>>choice1;
        if(choice1 == 1)
        {
            cout<<"\nEnter the choice for addition :\n1.first number\n2.second number\n";
            cin>>choice2;
            cout<<"\nEnter the number to be added : ";
            cin>>x;
            if(choice2 == 1)
            {
                a.add(x);
                cout<<"\nThe result is : ";
                a.output();
            }
            else if(choice2 == 2)
            {
                b.add(x);
                cout<<"\nThe result is : ";
                a.output();
            }
            else
                cout<<"\nWrong Choice";
        }
        else if(choice1 == 2)
        {
            cout<<"\nEnter the choice for subtraction :\n1.first number\n2.second number\n";
            cin>>choice2;
            cout<<"\nEnter the number to be subtracted : ";
            cin>>x;
            if(choice2 == 1)
            {
                a.subtract(x);
                cout<<"\nThe result is : ";
                a.output();
            }
            else if(choice2 == 2)
            {
                b.subtract(x);
                cout<<"\nThe result is : ";
                a.output();
            }
            else
                cout<<"\nWrong Choice";
        }
        else if(choice1 == 3)
        {
            cout<<"\nEnter your choice (first \"choice\" second)\n1.isEqualTo\n2.isNotEqualTo\n3.isGreaterThan\n4.isLessThan\n5.isGreaterThanOrEqualTo\n6.isLessThanOrEqualTo\n";
            cin>>choice2;
            if(choice2 == 1)
                a.isEqualTo(b);
            else if(choice2 == 2)
                a.isNotEqualTo(b);
            else if(choice2 == 3)
                a.isGreaterThan(b);
            else if(choice2 == 4)
                a.isLessThan(b);
            else if(choice2 == 5)
                a.isGreaterThanOrEqualTo(b);
            else if(choice2 == 6)
                a.isLessThanOrEqualTo(b);
            else
                cout<<"\nWrong Choice";
        }
    }
}
