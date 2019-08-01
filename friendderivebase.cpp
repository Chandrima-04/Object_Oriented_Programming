#include <iostream>
using namespace std;
 
class A
{
	private:
    		int x;
    		
		void show()
		{
			cout<<"\n This is the base class";
		}
		public:
		A() 
		{	
		x = 0;
		}
  	
};
 
class derived: public A
{
	int y;
	void disp()
	{
		show();
	}
	public:
		friend class A;
		
};

int main()
{
	A a;
	derived b;
	b.disp();
}
