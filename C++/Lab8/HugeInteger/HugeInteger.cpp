#include<iostream>
using namespace std;
class HugeInteger
{
        int array[40];
        // length of the number
        int length;
        //taking character array so that the input can be taken as a string
        char temp[40];
    public:
        HugeInteger()
        {
            int i;
            for(i = 0; i < 40; i++)
            {
                array[i] = 0;
            }
            length = 0;
        }
        void input()
        {
            cin>>temp;
            int i;
            for(i = 0; temp[i]!= '\0'; i++)
            {
                array[i] = int(temp[i] - 48);
            }
            length = i;
        }
        void output()
        {
            int i = 0;
            // loop to bring it to first non zero
            while(array[i] == 0)
                i++;
            // printing the number
            for(; i < length; i++)
            {
                cout<<array[i];
            }
            cout<<endl;
        }
        void shiftOnePosition(int x)
        {
            int i;
            for(i = length - 1; i >= 0; i--)
            {
                array[i+1] = array[i];
            }
            array[0] = x;
            length++;
        }
        void add(int x)
        {
            int i, adder, carry;
            adder = x % 10;
            i = length - 1;
            for(; i >= 0; i--)
            {
                carry = (array[i] + adder)/10;
                array[i] = (array[i] + adder) % 10;
                x = x/10;
                adder = x % 10;
                adder = adder + carry;
            }
            if(carry == 1)
            {
                shiftOnePosition(carry);
            }
        }
        void subtract(int x)
        {
            int i, sub, borrow;
            sub = x % 10;
            i = length - 1;
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
                // when length of the number decreases
                if(i == 0 && sub == 1 && borrow == 1)
                    length--;
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
        void isGreaterThan(const HugeInteger& obj)
        {
            if(length > obj.length)
                cout<<"\nTrue\n";
            else if(length == obj.length)
            {
                int i;
                for(i = 0; i < length; i++)
                {
                    if(array[i] > obj.array[i])
                    {
                        cout<<"\nTrue\n";
                        break;
                    }
                    else if (array[i] < obj.array[i])
                    {
                        cout<<"\nFalse\n";
                        break;
                    }
                    else
                        continue;
                }
                if(i == length)
                    cout<<"\nFalse";
            }
            else
                cout<<"\nFalse\n";
        }
        void isLessThan(const HugeInteger& obj)
        {
            if(length < obj.length)
                cout<<"\nTrue\n";
            else if(length == obj.length)
            {
                int i;
                for(i = 0; i < length; i++)
                {
                    if(array[i] > obj.array[i])
                    {
                        cout<<"\nFalse\n";
                        break;
                    }
                    else if (array[i] < obj.array[i])
                    {
                        cout<<"\nTrue\n";
                        break;
                    }
                    else
                        continue;
                }
                if(i == length)
                    cout<<"\nFalse\n";
            }
            else
                cout<<"\nFalse\n";
        }
        void isGreaterThanOrEqualTo(const HugeInteger& obj)
        {
            if(length > obj.length)
                cout<<"\nTrue\n";
            else if(length == obj.length)
            {
                int i;
                for(i = 0; i < length; i++)
                {
                    if(array[i] > obj.array[i])
                    {
                        cout<<"\nTrue\n";
                        break;
                    }
                    else if (array[i] < obj.array[i])
                    {
                        cout<<"\nFalse\n";
                        break;
                    }
                    else
                        continue;
                }
                if(i == length)
                    cout<<"\nTrue\n";
            }
            else
                cout<<"\nFalse\n";
        }
        void isLessThanOrEqualTo(const HugeInteger& obj)
        {
            if(length < obj.length)
                cout<<"\nTrue\n";
            else if(length == obj.length)
            {
                int i;
                for(i = 0; i < length; i++)
                {
                    if(array[i] > obj.array[i])
                    {
                        cout<<"\nFalse\n";
                        break;
                    }
                    else if (array[i] < obj.array[i])
                    {
                        cout<<"\nTrue\n";
                        break;
                    }
                    else
                        continue;
                }
                if(i == length)
                    cout<<"\nTrue\n";
            }
            else
                cout<<"\nFalse\n";
        }
};
