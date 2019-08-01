#include <iostream>
using namespace std;

class student
{
	public:
		virtual void display()=0;
};

class engineering: public student
{
	public:
		void display()
		{
			cout<<"I'm engineering student"<<endl;
		}
};

class medical: public student
{
	public:
		void display()
		{
			cout<<"I'm medical student"<<endl;
		}
};

class science: public student
{
	public:
		void display()
		{
			cout<<"I'm science student"<<endl;
		}
};

int main()
{
	student *s1, *s2, *s3;
	engineering e;
	medical m;
	science s;
	s1=&e;
	s2=&m;
	s3=&s;
	s1->display();
	s2->display();
	s3->display();
}
