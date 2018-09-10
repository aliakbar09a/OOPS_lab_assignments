#include<iostream>
#include<string>
using namespace std;
int x;
int y;
void funct1(int *ptr)
{
	ptr = &x;
	cout<<"\nNon constant pointer to non constant data";
	(*ptr)++;
	cout<<"\nx value incremented and pointer can also be changed";
	cout<<"\nval = "<<*ptr<<endl;
}
void funct2(const int *ptr)
{
	cout<<"\nNon constant pointer to constant data";
	ptr = &y;
	cout<<"\nnon constant pointer now points to y";
	cout<<"\nval = "<<*ptr<<endl;
}
void funct3(int *const ptr)
{
	cout<<"\nConstant pointer to non constant data";
	(*ptr)++;
	cout<<"\nx value incremented but pointer cannot be changed"<<endl;
	cout<<"\nval = "<<*ptr<<endl;
}
void funct4(const int *const ptr)
{
	cout<<"\nConstant pointer to constant data";
	cout<<"\nNothing can be changed using pointer"<<endl<<endl;
}
int main()
{
	cout<<"\nEnter the value of x :  ";
	cin>>x;
	cout<<"\nEnter the value of y :  ";
	cin>>y;
	int *ptr1 = &x;
	const int *ptr2 = &x;
	int *const ptr3 = &x;
	const int *const ptr4 = &x;
	funct1(ptr1);
	funct2(ptr2);
	funct3(ptr3);
	funct4(ptr4);
}
