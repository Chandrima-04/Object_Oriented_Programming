#include <iostream>
#include <cstring>

using namespace std;

class banking
{
	char account;
	int rate;
	int addrate;
	int time;
	float amount;

	public:
		banking(char acc,float a,int t)
		{
			//ac,ac2;
			account=acc;
			if(account=='s')
				rate=6;
			else
				rate=4;
			time=t;
			if(time>=5 & account=='s')
				addrate=3+rate;
			else
				addrate=rate;
			amount=a;
			amount=amount+(amount*rate*time);
			
		}

		void display()
		{
			cout<<"\n Customer with amount=Rs "<<amount<<" is getting "<<rate<<"% interest and additional total rate of"<<addrate<<"% interest for account type "<<account<<" keeping in the bank for "<<time<<" years";
		}
};

int main()
{
	char acc;
	int t;
	float a;
	cout<<"\n Enter s for savings and c for current type";
	cin>>acc;
	cout<<"Enter time and amount in Rs and paisa";
	cin>>t;
	cin>>a;
	banking acnt(acc,a,t);
	acnt.display();
	
	return 0;
} 				
