#include <iostream>
#include <cstring>

using namespace std;

class cricketer
{

	char name[20];
	int age;
	double score;
	int matchno;
	int fifties;
	int centuries;

	public:
		
		cricketer(char n[20],int a,double s,int m,int f,int c)
		{
			strcpy(name,n);
			age=a;
			score=s;
			matchno=m;
			fifties=f;
			centuries=c;
		}

		void display()
		{
			cout<<"\n cricketer "<<name<<"of age "<<age<<" with score "<<score<<" in "<<matchno<<" number of matches has made "<<fifties<<" fifties and "<<centuries<<" centuries. ";
		}
		friend void average(cricketer c1);
};

void average(cricketer c1)
{
	double av;
	av=c1.score/c1.matchno;
	cout<<"\n Hence have an average of "<<av;
}

int main()
{
	char c[20];
	int a,n,f,h;
	double s;
	cout<<"\n Enter name,age,score,no of matches,no of fifties and 100s of cricketer";
	cin>>c>>a>>s>>n>>f>>h;
	cricketer c1(c,a,s,n,f,h);
	c1.display();
	average(c1);
	return 0;
}

