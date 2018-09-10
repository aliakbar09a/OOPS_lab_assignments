#include<iostream>
#include"Rational.cpp"
using namespace std;
int main()
{
	int firstNum, firstDeno, secNum, secDeno;
	cout<<"\nEnter the numerator and denominator of first no. : ";
	cin>> firstNum >> firstDeno;
	Rational first(firstNum, firstDeno);
	cout<<"\nEnter the numerator and denominator of second no. : ";
	cin>> secNum >> secDeno;
	Rational second(secNum, secDeno);
	// Sum of the two rational
	cout<<"\nAddition Result"<<endl;
	Rational sum = first.add(second);
	sum.printRational();
	sum.printFractional();
	// Sub of the first by second
	cout<<"\nSubtraction Result"<<endl;
	Rational sub = first.sub(second);
	sub.printRational();
	sub.printFractional();
	// Mul of the two rational
	cout<<"\nMultiplication Result"<<endl;
	Rational mul = first.mul(second);
	mul.printRational();
	mul.printFractional();
	// Div of first by second
	cout<<"\nDivision Result"<<endl;
	Rational div = first.div(second);
	div.printRational();
	div.printFractional();
}
