#include <iostream>
using namespace std;

class dist
{
	private:
		int feet;
		int inch;
	public:
		dist()
		{}
		void getdata()
		{
			cout<<"\n Enter feet and inch";
			cin>>feet>>inch;
		}
		operator float()
		{
			float m;
			m=(.3048*feet)+(.0254*inch);
			return m;
		}
};

int main()
{
	float result;
	dist d1;
	d1.getdata();
	result=d1;
	cout<<"\n Basic conversation "<<result;
	return 0;
}
