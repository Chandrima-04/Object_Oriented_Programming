#include <iostream>
#include <string.h>
using namespace std;

class bankaccount
{
	char name[25];
	long accno;
	char acctype;
	long balance;
	char login[25];
	char password[25];

	public:
		void insert_details()
		{
			cout<<"\n Enter name";
			cin>>name;
			cout<<"\n Enter account no.";
			cin>>accno;
			cout<<"\n Enter account type- s for savings and  c for current";
			cin>>acctype;
			cout<<"\n Enter bank balance";
			cin>>balance;
			cout<<"\n Create your login id";
			cin>>login;
			cout<<"\n Create your password";
			cin>>password;
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
		char retlogin()
		{
			return login;
		}
		char retpass()
		{	
			return password;
		}
};

int main()
{
	int n;
	char c[25],p[25],
	char login[25]; char password[25];
	//bool a,b;
	bankaccount abc;
	abc.insert_details();
	login=*abc.retlogin();
	password=*abc.retpass();
	
	while(n)
	{
	cout<<"Enter login and password";
	cin>>c,p;
	//a=(strcmp(c,login)==0);
	//b=(strcmp(p,password)==0);
	if(strcmp(c,login)!=0 | strcmp(p,password)!=0)
		break;
	else
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
}
