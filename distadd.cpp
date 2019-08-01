#include <iostream>
#include <cstring>

using namespace std;

class distance1
{
	int feet;
	int inch;
	public:
		distance1()
		{
			feet=0;
			inch=0;
		}
		distance1(int m)
		{
			feet=m;
			inch=m;
		}
		void getdata(int m,int n)
		{
			feet=m;
			inch=n;
		}
		void show()
		{
			cout<<"\n distance is= "<<feet<<" feet and "<<inch<<" inches. ";
		}

		distance1 operator+=(distance1 b)
		{
			distance1 dis;
			dis.inch=inch+b.inch;
			dis.feet=feet+b.feet;
			if(dis.inch>=12)
			{
				dis.feet+=1;
				dis.inch-=12;
			}
			return dis;
		}

};

int main()
{
	distance1 a,b,c;
	int ft,in;
	cout<<"\n Enter distance1 where feet=inches";
	cin>>ft;
	a.getdata(ft,ft);
	cout<<"\n Enter distance1 as feet and inches";
	cin>>ft>>in;
	b.getdata(ft,in);
	a.show();
	b.show();
	c=a+=b;
	c.show();
	return 0;
}
