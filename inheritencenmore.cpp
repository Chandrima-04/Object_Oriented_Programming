#include <iostream>
#include <ctype.h>
#include <string.h>
using namespace std;

class staff
{
	protected:
		int code;
		char name[50];
	public:
		void get()
		{
			cout<<"Enter name and code of the person!"<<endl;
			cin>>name>>code;
		}
		
		void display()
		{
			cout<<name<<" has code no. "<<code<<"."<<endl;
		}
};

class faculty: public staff
{
	protected:
		char department[50];
		char subject_taken[50];
		char research_area[50];
	public:
		void get()
		{	
			cout<<"Enter name of department, subject taught and research area"<<endl;
			cin>>department>>subject_taken>>research_area;
		}
		void display()
		{
			cout<<"Department of "<<department<<", teaching subjects "<<subject_taken<<" and researching on "<<research_area<<"."<<endl;
		}
};

class officer: public staff
{
	protected:
		int rank;
		char grade;
	public:
		void get()
		{
			cout<<"Enter rank and grade!"<<endl;
			cin>>rank>>grade;
		}
		void display()
		{
			cout<<"With rank "<<rank<<" and grade "<<grade<<endl;
		}
};

class typist: public staff
{
	protected:
		int speed;
		char office[10];
	public:
		void get()
		{
		staff::get();
		cout<<"Enter speed and office"<<endl;
		cin>>speed>>office;
		}
		void display()
		{	
			staff::display();
			cout<<"Typist with speed "<<speed<<"page/hour and office in "<<office<<"."<<endl;
		}
};
class permanent: public typist
{
	protected:
		int salary;
	public:
		void get()
		{
			cout<<"Enter salary"<<endl;
			cin>>salary;
		}
		void display()
		{
			cout<<"Salary=Rs "<<salary<<endl;	
		}
};
class temporary: public typist
{
	protected:
		int daily_wage;
	public:
		void get()
		{
			cout<<"Daily wage"<<endl;
			cin>>daily_wage;
		}
		void display()
		{	
			cout<<"Wage per day=Rs "<<daily_wage<<endl;
		}
};

int main()
{
	temporary t;
	permanent p;
	officer o;
	faculty f;
	cout<<"Enter details for faculty"<<endl;
	f.staff::get();
	f.get();
	f.staff::display();
	f.display();
	cout<<"_________________________________________"<<endl;

	cout<<"Enter details for officer"<<endl;
	o.staff::get();
	o.get();
	o.staff::display();
	o.display();
	cout<<"_________________________________________"<<endl;

	cout<<"Enter details for permanent typist"<<endl;
	p.typist::get();
	p.get();
	p.typist::display();
	p.display();
	cout<<"_________________________________________"<<endl;

	cout<<"Enter details for temporary typist"<<endl;
	t.typist::get();
	t.get();
	t.typist::display();
	t.display();
	cout<<"_________________________________________"<<endl;
}
