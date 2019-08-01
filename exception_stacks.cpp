#include<iostream>
#define SIZE 5
using namespace std;
class Stack
{
	private:
	int a[SIZE];
	int top;
	public:
	Stack()
	{
		top=0;
	}
	void push(int i)
	{
	try
	{
		if(isFull())
		{
			throw ("Full stack!");
		}
		else
		{
			a[top]=i;
			top++;
		}
	}
	catch(const char *msg)
	{
		cout<<msg<<endl;
	}
	}
	int pop()
	{
		try
		{
			if(isEmpty())
			{
				throw ("Empty stack!");
			}
			else
			{
				return(a[--top]);
			}
		}
		catch(const char *msg)
		{
			cout<<msg<<endl;
		}
	return 0;
}
	int isEmpty()
	{
		return(top==SIZE?0:1);
	}
	int isFull()
	{
		return (top==SIZE?1:0);
	}
	void display()
	{
		if(!isEmpty())
		{
			for(int i=top-1;i>=0;i--)
				cout<<a[i]<<endl;
		}
	}
};

int main()
{
	Stack s;
	int ch=1;
	int num;
	while(ch!=0)
	{
		cout<<"1. push"<<endl;
		cout<<"2. pop"<<endl;
		cout<<"3. display"<<endl;
		cout<<"0. Exit"<<endl;
		cout<<"Enter ur choice :";
		cin>>ch;
		switch(ch)
		{
			case 0: break;
			case 1: cout<<"Enter the number to push";
			cin>>num;
			s.push(num);
			break;
			case 2: cout<<"a number was popped from the stack"<<endl;
			s.pop();
			break;
			case 3: cout<<"The numbers are"<<endl;
			s.display();
			break;
			default:
			cout<<"try again";
		}
	}
	return 0;
}
