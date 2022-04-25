#include<iostream.h>
#include<conio.h>
class primedemo
{
	int n,f;
	public:
		void get();
		void cal();
};
void primedemo::get()
{
	cout<<"\n Enter number:";
	cin>>n;
}
void primedemo::cal()
{
	f=1;
	for(int i=2;i<=n-1;i++)
	{
		if(n%i==0)
		f=0;
	}
	if(f==0)
		cout<<"\n Number"<<n<<" is not prime";
		else
		cout<<"\n Number"<<n<<" is prime";
	}
void main()
{
	clrscr();
	primedemo d;
	d.get();
	d.cal();
	getch();
}