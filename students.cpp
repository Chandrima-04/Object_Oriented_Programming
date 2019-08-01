#include <iostream>
using namespace std;

class student
{
	char name[50];
	int roll;
	int age;
	char dept[50];
	int year;
	float marks;

	public:
		void insert_details()
		{
			cout<<"\nEnter name";
			cin>> name;
			cout<<"\nEnter roll no";
			cin>> roll;
			cout<<"\nenter age";
			cin>> age;
			cout<<"\nEnter dept";
			cin>> dept;
			cout<<"\nEnter year";
			cin>> year;
			cout<<"Enter marks";
			cin>> marks;
		}
		
		void show_details()
		{
			cout<<"\nName \tRoll \tAge \tDept \tYear \tMarks";
			cout<<"\n"<<name<<"\t"<<roll<<"\t"<<age<<"\t"<<dept<<"\t"<<year<<"\t"<<marks;
		}
};

int main()
{
	//clrscr();
	student abc;
	abc.insert_details();
	abc.show_details();
	//getchar();
	return 0;
}
