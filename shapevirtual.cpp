#include <iostream>
using namespace std;
class shape
{
	public:
		virtual void area()
		{
			cout<<"I am arealess and hence massless entity!"<<endl;
		}
		virtual void display()
		{
			cout<<"I am shapeless shape!"<<endl;
		}
};

class circle: public shape
{
	float rad;
	float a;
	public:
		void area()
		{
			cout<<"Enter radius"<<endl;
			cin>>rad;
			a=3.14*rad*rad;
		}
		void display()
		{
			cout<<"Area of circle= "<<a<<"unit square"<<endl;
		}
};

class rectangle: public shape
{
	float h;
	float w;
	float a;
	public:
		void area()
		{
			cout<<"Enter height and width"<<endl;
			cin>>h>>w;
			a=h*w;
		}
		void display()
		{
			cout<<"Area of rectangle= "<<a<<"unit square"<<endl;
		}
};

class trapezoid: public shape
{
	float p1;
	float p2;
	float h;
	float a;
	public:
		void area()
		{
			cout<<"Enter parrallel sides and height"<<endl;
			cin>>p1>>p2>>h;
			a=0.5*(p1+p2)*h;
		}
		void display()
		{
			cout<<"Area of circle= "<<a<<"unit square"<<endl;
		}
};

int main()
{
	shape *s1, *s2,*s3;
	circle c;
	rectangle r;
	trapezoid t;
	s1=&c;
	s2=&r;
	s3=&t;
	s1->area();
	s1->display();
	s2->area();
	s2->display();
	s3->area();
	s3->display();
}
