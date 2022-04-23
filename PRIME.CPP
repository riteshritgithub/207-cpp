#include<iostream.h>
#include<conio.h>
class prime
{
	private:
		int n,f;
	public:
		void get();
		void cal();
	};
void prime::get()
{
	cout<<"\n Enter the number:\t";
	cin>>n;
	}
void prime::cal()
{
	int f=1;
	int i;
	for(i=2;i<=n-1;i++)
	{
	if(n%i==0)
	{
	f=0;
	}
}
	if(f==0)
	cout<<"\n the number is not prime:";
	else
	cout<<"\n the number is prime:";
}
	void main()
	{
	clrscr();
	prime f1;
	f1.get();
	f1.cal();
	getch();
	}