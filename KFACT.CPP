#include<iostream.h>
#include<conio.h>
class fact
{
	private:
		int num;
	public:
		void input()
		{
			cout<<"Enter the number : ";
			cin>>num;
		}
		void get()
		{
			int fact=1,i;
			for(i=1;i<=num;i++)
			{
				fact=fact*i;
			}
			cout<<"Factorial is : "<<fact;
		}
};
void main()
{
	clrscr();
	fact f;
	f.input();
	f.get();
getch();
}