#include<iostream.h>
#include<conio.h>
class swapdata
{
   public:
	void swap(int x, int y)
	{
	   int t;
	   t=x;
	   x=y;
	   y=t;
	   cout<<"\nAfter swapping:\n"<<x<<"\t"<<y;
	   }
	   void swap(char x,char y)
	   {
	   char t;
	   t=x;
	   x=y;
	   y=t;
	   cout<<"\nafter swapping:\n"<<x<<"\t"<<y;
	   }
	   };
	   void main()
	   {
	   int a,b;
	   char p,q;
	   clrscr();
	   cout<<"\nenter two integer";
	   cin>>a>>b;
	   cout<<"\n enter two character";
	   cin>>p>>q;
	   swapdata INT;
	   cout<<"\n before swapping:\n"<<a<<"\t"<<b<<"\t"<<p<<"\t"<<q;
	   INT.swap(a,b);
	   INT.swap(p,q);
	   getch();
	   }

