#include <iostream>
#include <string.h>

using namespace std;

class complex
{
	int real;
	int imaginary;

	public:
		void getdata(int r, int i)
		{
			real=r;
			imaginary=i;
		}
		void sum(complex c1, complex c2)
		{
			real=c1.real+c2.real;
			imaginary=c1.imaginary+c2.imaginary;
			cout<<"\n Complex no"<<real<<"+"<<imaginary<<"i";
		}
		void display()
		{
			cout<<"\n Complex no"<<real<<"+"<<imaginary<<"i";
		}
};


int main()
{
	int r1,r2,i1,i2;
	complex c1;
	complex c2;
	complex c3;
	cout<<"\n Enter number as real and complex";
	cin>>r1>>i1;
	cout<<"\n Enter second number as real and complex";
	cin>>r2>>i2;
	c1.getdata(r1,i1);
	c2.getdata(r2,i2);
	c1.display();
	c2.display();
	c3.sum(c1,c2);
	return 0;
}
