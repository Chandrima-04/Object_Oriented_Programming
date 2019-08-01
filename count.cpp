#include <iostream>
using namespace std;

class count
{
	protected:
		int c;
	public:
		count()
		{
			c=0;
		}
	
		count(int n)
		{
			c=n;
		}
	
		int givec()
		{
			return c;
		}

		void operator++()
		{
			c++;
		}
};

class counter: public count
{
	public:
		counter(int n):count(n)
		{

		}
		
		void operator--()
		{
			c--;
		}
};

int main()
{
	int no;	
	cout<<"Enter no"<<endl;
	cin>>no;
	counter co(no);
	++co;
	cout<<co.givec()<<endl;
	--co;
	cout<<co.givec()<<endl;
	return 0;
}			
		
