#include <iostream>
#include <stdlib.h>
using namespace std;

class polygon
{
	protected:
		float width;
		float height;
		public:
			void set_value()
			{
				cout<<"Enter width and height"<<endl;
				cin>>width>>height;
			}
};

class rectangle: public polygon
{
	float area;
	public:
		void calculate_area()
		{
			area=width*height;
			cout<<"Area of rectangle= "<<area<<"unit square"<<endl;
		}
};

class triangle: public polygon
{
	float area;
	public:
		void calculate_area()
		{
			area=width*height/2;
			cout<<"Area of triangle= "<<area<<"unit square"<<endl;
		}
};

int main()
{
	triangle t;
	rectangle r;
	triangle *p;
	p=&t;
	p->set_value();
	p->calculate_area();
	rectangle *s;
	s=&r;
	s->set_value();
	s->calculate_area();
}

