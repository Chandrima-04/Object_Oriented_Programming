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
	int operator!();
};
int A::operator!()
{
	return(x%2);
}
int main()
{
	A a1;
	if ( !a1 )
		cout << "is odd\n";
	else
		cout << " is even\n";
	return 0;
}
