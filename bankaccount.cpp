#include <iostream>
using namespace std;

class bankaccount
{
	char name[25];
	long accno;
	char acctype;
	long balance;

	public:
		void insert_details()
		{
			cout<<"\n Enter name";
			cin>>name;
			cout<<"\n Enter account no.";
			cin>>accno;
			cout<<"\n Enter account type-s for savings and c for current";
			cin>>acctype;
			cout<<"\n Enter bank balance";
			cin>>balance;
		}
		
		void deposit()
		{
			int dep;
			cout<<"\n Do you want to deposit? If yes enter value and give cash or cheque";
			cin>>dep;
			balance+=dep;
		}
		
		void withdraw()
		{
			int with;
			cout<<"\n Beware of fraud while withdrawal!";
			cin>>with;
			if(with>balance)
				cout<<"Sorry! Don't try taking out money which is not your!";
			else
				balance-=with;
		}
		void display()
		{
			cout<<"\n Name of customer:"<<name;
			cout<<"\n Amount left:Rs"<<balance;
		}
};

int main()
{
	int n;
	bankaccount abc;
	abc.insert_details();
	
	while(n)
	{
	cout<<"\n Enter 1 to deposit and 2 to withdraw and 0 to exit";
	cin>>n;

	switch(n)
	{
		case 1: 
			{
				abc.deposit();
				abc.display();
				break;
			}
		case 2:
			{
				abc.withdraw();
				abc.display();
				break;
			}
	}
	}
}
