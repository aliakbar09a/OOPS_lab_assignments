#include<iostream>
using namespace std;
class HugeInteger
{
        int array[40];
        //taking character array so that the input can be taken as a string
        char temp[40];
    public:
        HugeInteger()
        {
            for(int i = 0; i < 40; i++)
            {
                array[i] = 0;
            }
        }
        void input()
        {
            cout<<"\nEnter the 40 digit number : ";
            cin>>temp;
            for(int i = 0; temp[i]!= '\0'; i++)
            {
                array[i] = int(temp[i] - 48);
            }
        }
        void output()
        {
            cout<<"\nThe 40 digit number is : ";
            for(int i = 0; temp[i]!= '\0'; i++)
            {
                cout<<array[i];
            }
            cout<<endl;
        }
        void add(int x)
        {
            int i, adder, carry;
            adder = x % 10;
            while(temp[i+1]!='\0')
                i++;
            for(; i >= 0; i--)
            {
                carry = (array[i] + adder)/10;
                array[i] = (array[i] + adder) % 10;
                x = x/10;
                adder = x % 10;
                adder = adder + carry;
            }
        }
        void subtract(int x)
        {
            int i, sub, borrow;
            sub = x % 10;
            while(temp[i+1]!='\0')
                i++;
            for(; i >= 0; i--)
            {
                if(sub > array[i])
                {
                    borrow = 1;
                    array[i] = (array[i] - sub + 10) % 10;
                }
                else
                {
                    borrow = 0;
                    array[i] = (array[i] - sub) % 10;

                }
                //borrow = (array[i] - sub + 10)/10;
                //cout<<"sub "<<sub<<" borrow "<<borrow;
                x = x/10;
                sub = x % 10;
                sub = sub + borrow;
            }
        }
};
