#include<iostream.h>
#include<conio.h>
class pal
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
		int pal=0,r,sto;
		sto=num;
		while(num>0)
		{
			r=num%10;
			pal=pal*10+r;
			num=num/10;
		}
		if(sto==pal)
		{
			cout<<"Palindrome No";
		}
		else
		{
			cout<<"Not palindrome";
		}
	}
};
void main()
{
	clrscr();
	pal p;
	p.input();
	p.get();


getch();
}