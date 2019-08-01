#include <iostream>
#include <cstring>

using namespace std;

class complex_c
{
	int real;
	int comp;

	public:
		complex_c()
		{
			real=0;
			comp=0;
		}

		complex_c(int no)
		{
			real=no;
			comp=no;
		}
	
		complex_c(int r,int i)
		{
			real=r;
			comp=i;
		}


		friend void display(complex_c c);
		friend complex_c sum(complex_c c1, complex_c c2);
};

void display(complex_c c)
{
	char sign;
	if(c.comp>=0)
		sign='+';
	else 
		sign='-';
	cout<<"\n complex no \t"<<c.real<<sign<<c.comp<<"i \n";
}

complex_c sum(complex_c c1,complex_c c2)
{
	complex_c co;
	char sign;
	co.real=c1.real+c2.real;
	co.comp=c1.comp+c2.comp;
	/*if(co.comp>=0)
		sign='+';
	else 
		sign='-';
	cout<<"\n complex_c no sum"<<r<<sign<<c<<'i';*/
	return co;
	
}

int main()
{
	int r1,r2,i1,i2;
	complex_c c;
	//complex_c_c c2;
	cout<<"\n Enter value in format no=x+ix";
	cin>>r1;
	i1=r1;
	cout<<"\n Enter value in format no=x+iy ";
	cin>>r2>>i2;
	complex_c c1=complex_c(r1);
	complex_c c2=complex_c(r2,i2);
	display(c1);
	display(c2);
	c=sum(c1,c2);
	display(c);
	return 0;
}
	
