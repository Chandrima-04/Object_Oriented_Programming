#include<iostream>
#define SIZE 5
using namespace std;
class Queue
{
	private:
	int rear;
	int front;
	int s[SIZE];
	public:
	Queue()
	{
		front=0;
		rear=-1;
	}
	void insert(int item)
	{
	try
	{
		if(isFull())
		{
			throw ("Full Queue");
		}
		else
		{
			rear=rear+1;
			s[rear]=item;
		}
	}
	catch(const char *msg)
	{
	cout<<msg;
	}
	}
	void del()
	{
	int item;
	try
	{
		if(isEmpty())
		{
			throw "Empty Queue";
		}
		else
		{
		item=s[front];
		front=front+1;
		cout<<"\n DELETED ELEMENT IS %d\n\n"<<item;
		}
	}
	catch(const char *msg)
	{
		cout<<msg;
	}
	}
	int isEmpty()
	{
		return(front>rear?1:0);
	}
	int isFull()
	{
		return(rear==SIZE?1:0);
	}
	void display()
	{
	cout<<"\n";
	for(int i=front;i<=rear;i++)
	{
		cout<<s[i]<<"\t";
	}
	}
};

int main()
{
	int ch;
	Queue q;
	int item;
	while(ch!=0)
	{
		cout<<"\n\n1.INSERTION \n";
		cout<<"2.DELETION \n";
		cout<<"0.EXIT \n";
		cout<<"\nENTER YOUR CHOICE : ";
		cin>>ch;
		switch(ch)
		{
			case 1:
			cout<<"\n\t INSERTION \n";
			cout<<"\nENTER AN ELEMENT : ";
			cin>>item;
			q.insert(item);
			q.display();
			break;
			case 2:
			cout<<"\n\t DELETION \n";
			q.del();
			q.display();
			break;
			case 0:
			break;
		}
	}
	return 0;
}
