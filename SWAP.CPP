#include<iostream.h>
#include<conio.h>
class swap
{
	int a,b,temp;
	public:
	void get();
	void show();
};
void swap::get()
{
	cout<<"enetr the two numbers";
	cin>>a>>b;
}
void swap::show()
{
	temp=a;
	a=b;
	b=temp;
	cout<<"after swapping"<<a<<""<<b;
}
void main()
{
	clrscr();
	swap s;
	s.get();
	s.show();
	getch();
}
