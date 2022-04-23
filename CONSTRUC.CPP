#include<iostream.h>
#include<conio.h>
class demo
{
	private:
		int x, y;
	public:
		demo();
		demo(int a,int b);
		demo(demo &q);
		~demo();
		void show();
};
demo :: demo()
{
	cout<<"contruscter called\n";
}
demo :: demo(int a,int b)
{
	x=a;
	y=b;
}
demo :: demo(demo &q)
{
	x=q.x;
	y=q.y;
}
demo :: ~demo()
{
	cout<<"destructer called";
}
void demo :: show()
{
	cout<<"value of x is :->"<<x<<endl;
	cout<<"value of y is :->"<<y<<endl;
}
void main()
{
	clrscr();

	demo d;
	demo d1(20,70);
	d1.show();
	demo w(d1);
	d1.show();

	getch();
}
