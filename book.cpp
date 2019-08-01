#include <iostream>
#include <cstring>

using namespace std;

class book
{
	char title[20];
	int bookno;
	char author[20];
	int edition;
	char publisher[20];

	public:
		book()
		{
		}
		book(char t[],int bno,char a[],int e,char p[])
		{
			strcpy(title,t);
			bookno=bno;
			strcpy(author,a);
			edition=e;
			strcpy(publisher,p);
		}
		
		void display()
		{
			cout<<"\n"<<title<<" having book number "<<bookno<<"and edition"<<edition<<" by author "<<author<<" is published by "<<publisher;
		}
		
		~book()
		{	
			cout << "Object is being deleted::Number"<<endl;
		}
};

int main()
{
	char c[20],a[20],p[20];
	int b,e,i;
	book *book1= new book[10];
	for(i=0;i<10;i++)
	{	
		cout<<"\n Enter values for title,bookno,author,edition and publisher in order";
		cin>>c>>b>>a>>e>>p;
		book1[i] = book(c,b,a,e,p);
		book1[i].display();
	}
}
