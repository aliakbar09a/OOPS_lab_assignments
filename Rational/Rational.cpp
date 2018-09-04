#include<iostream>
#include<algorithm>
using namespace std;
class Rational
{
	public:
		// Default Constructor
		Rational()
		{
			num = 1;
			deno = 1;
		}
		// Parametrized Constructor
		Rational(int a, int b)
		{
			if(b == 0)
				{
					cout<<"\nWarning : Denominator is assigned zero"<<endl;
					exit(0);
				}
			else
				Reduction(a,b);
		}
		void setNum(int x)
		{
			this->num = x;
		}
		void setDeno(int x)
		{
			this->deno = x;
		}
		int getNum()
		{
			return num;
		}
		int getDeno()
		{
			return deno;
		}
		Rational add(Rational second)
		{
			int sumNum, sumDeno;
			sumNum = this->num*second.getDeno() + this->deno*second.getNum();
			sumDeno = this->deno*second.getDeno();
			Rational sum(sumNum, sumDeno);
			return sum;
		}
		Rational sub(Rational second)
		{
			int subNum, subDeno;
			subNum = this->num*second.getDeno() - this->deno*second.getNum();
			subDeno = this->deno*second.getDeno();
			Rational sub(subNum, subDeno);
			return sub;
		}
		Rational mul(Rational second)
		{
			int mulNum, mulDeno;
			mulNum = this->num*second.getNum();
			mulDeno = this->deno*second.getDeno();
			Rational mul(mulNum, mulDeno);
			return mul;
		}
		Rational div(Rational second)
		{
			int divNum, divDeno;
			if(second.getNum() == 0)
			{
				cout<<"\nError : Division By Zero\n";
				exit(0);
			}
			divNum = this->num*second.getDeno();
			divDeno = this->deno*second.getNum();
			Rational div(divNum, divDeno);
			return div;
		}
		void printRational()
		{
			cout<<"The Rational form  is : "<< num <<"/"<< deno<<endl;
		}
		void printFractional()
		{
			float ans = (float)num / (float)deno;
			cout<<"The Fractional form is : "<< ans<<endl;
		}
	private:
		int num, deno;
		void Reduction(int a, int b)
		{
			int gcd = __gcd(a, b);
			this->num = a / gcd;
			this->deno = b / gcd;
		}
};
		}
};
