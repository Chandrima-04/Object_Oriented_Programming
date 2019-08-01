#include<iostream>

using namespace std;

inline int max_3(int a, int b, int c)
{
	//int big;
	return a > b ? (a > c ? a : c) : (b > c ? b : c) ;
	//return big;
}

int main()
{
	int a,b,c,big;
	cin>>a;
	cin>>b;
	cin>>c;
	//=max_3(a,b,c);
	cout<<"Largest amongst them is"<<max_3(a,b,c);
}
