#include <iostream>
#include<cstring>
using namespace std;

class comp
{
	int i;
	int r;
	public:
	
		void getdata(int m,int n)
		{
			r=m;
			i=n;
		}
	
		void showdata()
		{
			char c;
			if(i<0)
				c='-';
			else
				c='+';
			cout<<"\n Complex data: "<<r<<c<<i<<"i";
		}
		// comp operator+(comp c1,comp c2);

	comp operator+(comp c1)
	{
		comp complx;
		complx.r=r+c1.r;
		complx.i=c1.i+i;
		return complx;
	}
};

int main()
{
	int im,re;
	comp c1,c2,c3;
	cout<<"\n Enter real and imaginary part!";
	cin>>re>>im;
	c1.getdata(re,im);
	cout<<"\n Enter real and imaginary part!";
	cin>>re>>im;
	c1.showdata();
	c2.getdata(re,im);
	c2.showdata();
	c3=c1+c2;
	c3.showdata();
return 0;
}
	
