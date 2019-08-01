#include <iostream>

using namespace std;

int hms_to_sec(int h,int m,int s)
{
	long time;
	time= (3600*h)+(60*m)+s;
	return time;
}

int main()
{
	char c[8];
	int n,h,m,s;
	long time;
	while(n!=0)
	{
		cout<<"\n Enter time hh.mm.ss";
		cin>>c;
		h=(int)((c[0]-48)*10+(c[1]-48));
		m=(int)((c[3]-48)*10+(c[4]-48));
		s=(int)((c[6]-48)*10+(c[7]-48));
		if((h>23) | (m>59) | (s>59))
		{
			cout<<"\n Wrong input";
			break;
		}
		time=hms_to_sec(h,m,s);
		cout<<"\n Time in sec"<<time;
		cout<<"\n Enter 0 if you want to close";
		cin>>n;
	}
}

