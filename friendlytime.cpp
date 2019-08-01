#include <iostream>
#include <string.h>

using namespace std;

class time_c
{
	int hour;
	int minute;

	public:
		void gettime(int hr, int min)
		{
			hour=hr;
			minute=min;
		}
		void display()
		{
			cout<<"\n Time= "<<hour<<"::"<<minute;
		}
		friend time_c sum(time_c t1,time_c t2);
};

time_c sum(time_c t1, time_c t2)
{
	int hour,minute;
	hour=t1.hour+t2.hour;
	minute=t1.minute+t2.minute;
	if(minute>59)
	{
		hour+=1;
		minute%=60;
	}
	if(hour>=24)
		hour%=24;
	cout<<"\n Time= "<<hour<<"::"<<minute;
}

int main()
{
	int h1,h2,m1,m2;
	time_c t1;
	time_c t2;
	cout<<"\n Enter time as hour and minute";
	cin>>h1>>m1;
	cout<<"\n Enter second time as hour and minute ";
	cin>>h2>>m2;
	t1.gettime(h1,m1);
	t2.gettime(h2,m2);
	t1.display();
	t2.display();
	sum(t1,t2);
	return 0;
}
