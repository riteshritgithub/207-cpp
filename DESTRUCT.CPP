//program to demostrate using constructor & destructor
#include<iostream.h>
#include<conio.h>
class demo
{
	public:
		demo();
	       ~demo();
};
demo::demo()
	{
	  cout<<"constructor called"<<endl;
	}
demo::~demo()
	{
	  cout<<"destructor called";
	}
void main()
{
   clrscr();

   demo d;

   getch();
}
