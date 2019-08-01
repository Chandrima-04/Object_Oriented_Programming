#include <iostream>
using namespace std;

class student
{
	char name[25];
	int roll;
	float marks1;
	float marks2;
	float marks3;
	float average;

	public:
		void getdata(int r)
		{
			cout<<"\n What's your name?";
			cin>>name;
			//cout<<"\n Roll please.";
			//cin>>roll;
			roll=r+1;
			cout<<"\n Enter marks in 3 sub";
			cin>>marks1>>marks2>>marks3;
			average=(marks1+marks2+marks3)/3;
		}
		void display()
		{
			cout<<"\n"<<name<<" with roll "<<roll<<" and marks "<<marks1<<","<<marks2<<" and "<<marks2<<" has an average of "<<average<<".";
		}
};

int main()
{
	int n,i,total;
	cout<<"\n Enter no of student";
	cin>>n;
	total=n;
	student a[n];
	for(i=0;i<n;i++)
	{
		//student a[i];
		a[i].getdata(i);
	}
	while(n)
	{
		cout<<"\n Enter roll of the person to be displayed";
		cin>>i;
		if(i>total)
		{
			cout<<"\n Student does not exists!";
			continue;
		}
		else
		{
			a[i-1].display();
			cout<<"\n Enter 0 to exit";
			cin>>n;
		}
	}
	return 0;
}
