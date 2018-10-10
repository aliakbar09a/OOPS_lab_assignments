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
            cout<<"\nEnter the big digit number : ";
            cin>>temp;
            for(int i = 0; temp[i]!= '\0'; i++)
            {
                array[i] = int(temp[i] - 48);
            }
        }
        void output()
        {
            cout<<"\nThe big number is : ";
            int i = 0;
            // loop to bring it to first non zero
            while(array[i] == 0)
                i++;
            // printing the number
            for(; temp[i]!= '\0'; i++)
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
                x = x/10;
                sub = x % 10;
                sub = sub + borrow;
            }
        }
        void isEqualTo(const HugeInteger& obj)
        {
            int i=0, j=0;
            // finding the first non zero digit of this object
            while(array[i] == 0)
                i++;
            // finding the first non zero digit of passed object
            while(obj.array[j] == 0)
                j++;
            for(; temp[i]!= '\0'; i++, j++)
            {
                if(array[i] != obj.array[j])
                    break;
            }
            if((temp[i] == '\0') && (obj.temp[j] == '\0'))
                cout<<"\nTrue\n";
            else
                cout<<"\nFalse\n";
        }
        void isNotEqualTo(const HugeInteger& obj)
        {
            int i=0, j=0;
            // finding the first non zero digit of this object
            while(array[i] == 0)
                i++;
            // finding the first non zero digit of passed object
            while(obj.array[j] == 0)
                j++;
            for(; temp[i]!= '\0'; i++, j++)
            {
                if(array[i] != obj.array[j])
                    break;
            }
            if((temp[i] == '\0') && (obj.temp[j] == '\0'))
                cout<<"\nFalse\n";
            else
                cout<<"\nTrue\n";
        }
};
