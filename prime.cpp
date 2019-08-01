#include<iostream>
using namespace std;
class A
{
	int x;
	public:
	A()
	{
		cout<<"Enter a number:";
		cin>>x;
	}
	int operator--();
} ;
	int A::operator--()
	{
		cout<<"x = "<<x<<endl;
		int i,c=0;
		for(i=2;i<=x/2;i++)
		{
			//cout<<"i "<<i<<"c "<<c<<endl;
			if(x%i==0)
			{
				c++;
				//cout<<"i "<<i<<" x "<<x<<endl;
			}
		}
		if(c==0)
			return 0;
		return 1;
	}
int main()
{
	A a1;
	if ( --a1 )
		cout << "is not prime\n";
	else
		cout << " is prime\n";
	return 0;
}

