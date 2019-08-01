# include<iostream>
using namespace std;
# define SIZE 10

class queue
{
	int a[SIZE];
	int front;
	int rear;
public:
	void que()
	{
		front=-1;
		rear=-1;
	}

	void insert(int i)
	{
		if(rear>=SIZE-1)
		{
			cout<<"The queue is full !\n";
		}	

		else if(front == -1) 
		{

			cout<<"The data has been inserted!\n";
			front++;
			rear++;
			a[rear] = i;
		}
		else
		{
			cout<<"The data has been inserted!\n";
			rear++;
			a[rear] = i;
		}
	}		
	void dlete(void)
	{
		if(front > rear || rear ==-1)
			cout<<"The queue is empty !\n";
		else
		{
			cout<<"The data has been deleted!\n";
			front++;
		}
	}
	void display(void)
	{
		int i=front;
		if(front>rear || rear ==-1 )
			cout<<"The queue is empty!\n"<<endl;
		else if (i=front);
			cout<<"The elements in the queue are:-\n"<<endl;
		for(i;i<=rear;i++)
			cout<<a[i]<<"  ";
			cout<<endl;
	}
};



int main()
{
	queue q;
	q.que();
	int n,x;
	while(1) 
	{
		cout<<"Press 1 for insert \nPress 2 for delete\nPress 3 for display\nPress 0 for exit\n"<<endl;
		cin>>n;
		switch(n)
		{
		
			case 1:
				cout<<"Enter the value you want to insert "<<endl;
				cin>>x;
				q.insert(x);
				break;
					
			case 2:
				q.dlete();
				break;
				
			case 3:
				q.display();
				break;
			case 0:
				return(0);
			default: cout<<"Please check your choice!\n";
				 break;
		}
	}
	return 0;
}
