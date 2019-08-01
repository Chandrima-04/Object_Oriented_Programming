#include <iostream>
using namespace std;

class fixes
{
	int c;
	public:
		fixes(){}
		fixes(int n)
		{
			c=n;
		}
		fixes operator++()
		{
			c++;
			return c;
		}
		fixes operator++(int)
		{
			fixes a(c);
			(c)++;
			return c;
		}
		void showdata()
		{
			cout<<"\n No= "<<c;
		}
};

int main()
{
	int n;
	cout<<"\n Enter num";
	cin>>n;
	fixes a(n);
	a++;
	a.showdata();
	++a;
	a.showdata();
	return 0;
}
