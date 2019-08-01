#include <iostream>
using namespace std;

class data
{
	int a;
	
	public:
		void getval()
		{
			cout<<"\n Enter value of no";
			cin>>a;
		}
		void disp()
		{
			cout<<a<<"\t";
		}

		friend void swapping(data &, data &);
};

void swapping(data &s,data &p)
{
	
	s.a=s.a+p.a;
	p.a=s.a-p.a;
	s.a=s.a-p.a;

	cout<<"\n New swapped values are "<<s.a<<"\t"<<p.a;
}

int main()
{
	data s;
	data p;
	s.getval();
	p.getval();
	
	s.disp();
	p.disp();
	swapping(s,p);
	return 0;
}
