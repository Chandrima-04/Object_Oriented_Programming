#include <iostream>
#include <cstring>
#include<string.h>
using namespace std;

class user
{
	public:
		user(string n, int a)
		{
			name=n;
			age=a;
		}
	protected:
		string name;
		int age;
};

class Student: public user
{
	string course;
	long roll;
	double marks;

	public:
		Student(string c, long r, double m, string n, int a): user(n, a)
		{
			cout<<"Creating students with attributes! \n";
			course=c;
			roll=r;
			marks=m;
		}
		void display()
		{
			cout<<name<<" with roll number "<<roll<<" and age "<<age<<" taking course  "<<course<<" has marks "<<marks<<". \n";
		}
};


class Teacher: public user
{
	string subjects_assign;
	int contact_hour;

	public:
		Teacher(string s,int c,string n,int a): user(n,a)
		{
			cout<<"Creating teachers with atrributes! \n";
			subjects_assign=s;
			contact_hour=c;
		}
		void display()
		{
			cout<<name<<" with contact hour "<<contact_hour<<" and age "<<age<<" teaches "<<subjects_assign<<". \n";
		}
};

int main()
{
	string s="I.T.", sname="Chandrima Bhattacharya",tname="Sutapa Bhattacharya",sub="Computers";
	Student cb(s,111308009,99,sname,21);
	Teacher sut(sub,1400,tname,47);
	cb.display();
	sut.display();
	return 0;
}
			 
