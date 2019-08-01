#include <iostream>
#include <cstring>
#include<cstdlib>
using namespace std;

class concstr
{
	char a[50];
	public:
		void getdata()
		{
			cout<<"\n Enter string";
			cin>>a;
		}
		void showdata()
		{
			cout<<"\n the string is "<<a;
		}
		concstr operator==(concstr b)
		{
			concstr s;
			if(strcmp(a,b.a)==0)
				cout<<"\n The strings are same!";
			else
				cout<<"\n String is not same!";
		}
};

int main()
{ 
	concstr A,b,c;
	A.getdata();
	b.getdata();
	A.showdata();
	b.showdata();
	c=A==b;
	return 0;
}
