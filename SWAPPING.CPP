#include<iostream.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	cout<<"enter a";
	cin>>a;
	cout<<"enter b";
	cin>>b;

	cout<<"\nbefore swapping";
	cout<<"\nvalue of a is"<<a;
	cout<<"\nvalue of b is"<<b;

	a=a+b;
	b=a-b;
	a=a-b;

	cout<<"\n after swapping";
	cout<<"\nvalue of a is"<<a;
	cout<<"\nvalue of b is"<<b;
	getch();
}

