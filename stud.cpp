#include <iostream>
#include <ctype.h>
#include <string.h>
using namespace std;

class student
{
	protected:
		string name;
		int roll;

	public:
		void get()
		{
			cout<<"Enter name of the student!"<<endl;
			cin>>name;
			cout<<"Enter roll no!"<<endl;
			cin>>roll;	
		}
		void display()
		{
			cout<<name<<"\t"<<roll<<"\t";
		}
};

class marks: public student
{
	protected:
		int marks1;
		int marks2;
	public:
		int get_marks()
		{
			cout<<"Enter marks in subject 1 out of 50"<<endl;
			cin>>marks1;
			cout<<"Enter marks in subject 2 out of 50"<<endl;
			cin>>marks2;
		}
		void displaymarks()
		{
			cout<<marks1<<"\t";
			cout<<marks2<<"\t";
		}
};

class results: public marks
{
	private:
		int total;
	public:
		void cal_result()
		{
			total=marks1+marks2;
			
				
		}
		void display_result()
		{
			cal_result();			
			if((total)/2>=30)
				cout<<"PASSED";
			else
				cout<<"FAILED";
		}
};

int main()
{
	int n,i;
	cout<<"How many students!";
	cin>>n;
	results res[n];
	for(i=0;i<n;i++)
	{
		res[i].get();
		res[i].get_marks();
		
	}
	cout<<" Name \t Roll \t Marks1  Marks2  Total"<<endl;
	cout<<"_________________________________________"<<endl;
	for(i=0;i<n;i++)
	{
		res[i].display();
		res[i].displaymarks();
		res[i].display_result();
		cout<<"\n";
	}
	return 0;
}
	
		
