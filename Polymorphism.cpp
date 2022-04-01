#include<iostream>
using namespace std;

class shape{
public:
	double x,y;
	person(double x, double y)
	{
       this->x=x;
       this->y=y;
	}
	double display()
	{
		return 0;
	}
};

class triange: public shape{
public:
	triange(double x, double y):shape(double x, double y)
	{

	}
	double display()
	{
		return 0.5*x*y;
	}
};

class rectangle:public shape{
public:
	rectangle(double x, double y):shape(double x, double y)
	{

	}
	double display()
	{
		return x*y;
	}
};

int main()
{
	shape *s;
	s=&t;
	cout<<"Area of triangle : "<<s->display()<<endl;
	s=&r;
	cout<<"Area of rectangle : "<<s->display()<<endl;
	return 0;
}