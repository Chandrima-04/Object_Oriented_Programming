#include <iostream>
#include <cstring>
using namespace std;

class student
{
	int roll;
	char name[20];
	char course[20];
	public:
		void input_student()
		{
			cout<<"\n enter name,roll and course";
			cin>>name>>roll>>course;
		}
		void display_student()
		{
		cout<<"\n"<<name<<" from course "<<course<<" has a roll no "<<roll;
		}
		string get_name()
		{
			return name;
		}
		int get_roll()
		{
			return roll;
		}
		string get_course()
		{
			return course;
		}
};

class exam: private student
{
	int marks1;
	int marks2;
	int marks3;
	public:
		void input_marks()
		{
			input_student();
			cout<<"\n Enter marks of sub 1,2, & 3";
			cin>>marks1>>marks2>>marks3;
		}
		void display_result()
		{
			display_student();
			cout<<"\n"<<get_name()<<" from course "<<get_course()<<" has a roll no "<<get_roll()<<" and have got marks"<<marks1<<","<<marks2<<" and "<<marks3;
		}
};

int main()
{
	exam stud[5];
	int n;
	for(n=0;n<5;n++)
	{
		//stud[n].input_student();
		//stud[n].display_student();
		stud[n].input_marks();
	}
	for(n=0;n<5;n++)
		stud[n].display_result();
}				
