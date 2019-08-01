#include <iostream>
#include <cstring>
using namespace std;

class central_time;
class railway_time
{
	public:
		int hour;
		int min;
	public:
		railway_time()
		{
			cout<<"Enter time as hour and min in 24 hr format";
			cin>>hour>>min;
		}
		int gethour()
		{
			return hour;
		}
		int getmin()
		{
			return min;
		}
};

class central_time
{
	int h,m,flag;
	public:
		central_time(railway_time x)
		{
			if(x.hour>=12)
			{
				flag=1;
				h=x.hour-12;
			}
			else if (x.hour==0)
			{
				flag=0;
				h=12;
			}
			m=x.min;
		}	
		void show()
		{
			if(flag==1)
				cout<<"\n Time is "<<h<<":"<<m<<"pm";
			else
				cout<<"\n Time is "<<h<<":"<<m<<"am";
		}
};

int main()
{
	railway_time c1;
	central_time x=c1;
	x.show();
	return 0;
}			
