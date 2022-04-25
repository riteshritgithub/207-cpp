#include<iostream.h>
#include<conio.h>
class A
{
	public:
		void show()
		{
			cout<<"\n base class";
		}
	};
class b:public A
{
	public:
		void show()
		{
			cout<<"\n derived class";
		}
	};
void main()
{
	clrscr();
	A a;
	b c;
	a.show();
	c.show();
	c.A::show();
	getch();
}
