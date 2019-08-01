# include<iostream>
using namespace std;
# define SIZE 10

class stack
{
	int a[SIZE];
	int top; 
	public:
		void stk()
		{
			top=-1;
		}
		void push(int i)
		{
			top++;
			if(top>=0)
			{
				a[top]=i;
				cout<<"\n The data has been pushed!"<<i;
			}
			else
		 	cout<<"\n Error: Stack overflow!";
		}

		void pop()
		{
			if(top>=0)
			{
				cout<<"\n The Data is popped! "<<a[top];
				top--;
			}
			else
				cout<<"\n Error: Empty stack";
		}
		void display()
		{
		int i=0;
		if(top>=0)
		{
			cout<<"\n The elements in the stack are";
			for(i--;i<=top;i++)
			{
				cout<<a[i]<<"  ";
				cout<<endl;
			}
		}
		else
			cout<<"\n Error: Empty Stack";
}
};


int main()
{
	stack s;
	int x,n;
	s.stk();
	while(1) 
	{
		cout<<"\n Press 1 for push \nPress 2 for pop\nPress 3 for display\nPress 0 for exit\n";
		cin>>n;
		switch(n)
		{
			case 1:
				cout<<"\n Enter the value you want to push ";
				cin>>x;
				s.push(x);
				break;
				
			
			case 2:
				s.pop();
				break;
				
			case 3:
				s.display();
				break;
				
			case 0: return(0);
			default: cout<<"Check your choice!\n";	
		}
	}
	return 0;
}



