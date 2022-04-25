#include<iostream.h>
#include<conio.h>
class swapdata
{
	public:
		void swap(int x,int y)
		{
			int t;
			t=x;
			y=t;
			cout<<"\n after swapping;\n"<<x<<y;
		}
		void swap(char x,char y)
		{
			char t;
			t=x;
			x=y;
			y=t;
			cout <<"\n after swapping:\n"<<x<<y;
		}
};
void main()
{
	int a,b;
	char p,q;
	a=6;
	b=10;
	q='m';
	p='a';
	swapdata int;
	cout<<"\n before swapping:\n"<<a<<"\t"<<b<<"\t"<<p<<"\t"<<q;
	int.swap(a,b);
	int.swap(p,q);
}