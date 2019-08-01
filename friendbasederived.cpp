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
  		friend class derived;
};
 
class derived: public A
{
	int y;
	public:
		void disp()
		{
			show();
		}
		
};

int main()
{
	A a;
	derived b;
	b.disp();
}
