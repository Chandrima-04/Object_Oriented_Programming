#include <iostream>
using namespace std;
class A
{
	public:
	void division(int x,int y)
	{
		cout<<"We are inside division function in class A"<<endl;
		if(y>0)
			cout<<(x/y)<<endl;
		else
			throw(y);
	}
};

int main()
{
	A a1, a2;
	int a,b;
	try
	{
		cout<<"We are inside the try block"<<endl;
		cout<<"Enter 2 numbers-"<<endl;
		if(!(cin>>a>>b))
			throw ("Caught!Value not and integer");
		a1.division(a,b);
	}
	
	catch (int i)
	{
		cout<<"Caught divide by 0 exception!"<<endl;
	}
	
	catch (const char *s)
	{
		cout<<s<<endl;
	}
}	
