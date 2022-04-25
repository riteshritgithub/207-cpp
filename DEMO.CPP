	#include<iostream.h>
	#include<conio.h>
	class demo
	{
	private:
	int x;
	public:
	demo()//default
	{
	cout<<"the constructure with no parameter";
	}
	demo(int a)//parameterized
	{
	x=a;
	cout<<"\n\tconstructer with one parameter x="<<x;
	cout<<"\n\tsquare of x is"<<x*x;
	}
	demo(int a,int b)//parameterised
	{
	cout<<"\n\t constructure with two parameter a="<<"b="<<b;
	cout<<"\n\taddition is a+b="<<a+b;
	}
	demo(int a,int b,int c)//parameterised
	{
	cout<<"\n\tconstructure with three parameter a="<<a<<"b="<<b<<"c="<<c;
	cout<<"\n\tAddition is a+b+c="<<a+b+c;
	}
	demo(demo&d)//copy
	{
	cout<<"\n\tcopy of constructure is x=d.x="<<d.x;
	x=d.x;
	cout<<"\n\t the copied constructor is"<<x;
	}
	};
	void main()
	{
	clrscr();
	demo d1;
	demo d2(10);
	demo d3(20,30);
	demo d4(20,30,40);
	demo d5(d2);
	getch();
	}