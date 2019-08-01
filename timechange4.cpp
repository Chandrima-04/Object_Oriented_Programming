#include <iostream>
#include <cstring>
using namespace std;

class central_time;
class railway_time
{
	//public:
		int hour;
		int min;
	public:
		railway_time()
		{
			cout<<"Enter time as hour and min in 24 hr format";
			cin>>hour;
			cin>>min;
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
			if(x.gethour()<12)
			{
				h=x.gethour();
				flag=0;
			}
			if(x.gethour()>=12)
			{
				flag=1;
				h=x.gethour()-12;
			}
			else if (x.gethour()==0)
			{
				flag=0;
				h=12;
			}
			m=x.getmin();
			if(m>60)
			{
				m=m-60;
				h=h+1;
			}
				
		}	
		void show()
		{
			if(m>=0 && m<10)
				cout<<"\n Time is:"<<h<<":0"<<m;
			else
				cout<<"\n Time is:"<<h<<":"<<m;
			if(flag==1)
				cout<<"pm";
			else
				cout<<"am";
		}
};

int main()
{
	railway_time c1;
	central_time x=c1;
	x.show();
	return 0;
}			
