#include <iostream>
using namespace std;

class leastnum
{
	int a;
	public:
		void getdata()
		{
			cout<<"Enter value"<<endl;
			cin>>a;
		}
		int senddata()
		{
			return a;
		}
		int compare(leastnum a1, leastnum a2)
		{
			 return (this->senddata() < a1.senddata() ? (this->senddata() < a2.senddata() ? this->senddata() : a2.senddata() ) : (a1.senddata() < a2.senddata() ? a1.senddata() : a2.senddata())) ;
		}
};

int main()
{
	int numb;
	leastnum x, y,z;
	x.getdata();
	y.getdata();
	z.getdata();
	numb= x.compare(y,z);
	cout<<"Least number amongst given data= "<<numb<<endl;
}
