#include<iostream.h>
#include<conio.h>
class fibo
{
	private:
		int num;
	public:
		void input()
		{
			cout<<"Enter the Number for series : " ;
			cin>>num;
		}
		void get()
		{
			int a=0,b=1,c,i;
			cout<<"Fibo Series :"<<endl;
			for(i=1;i<=num;i++)
			{
				cout<<" \t"<<a;
				c=a+b;
				a=b;
				b=c;
			}
		}
};
void main()
{
	clrscr();
	fibo f;
	f.input();
	f.get();
getch();
}