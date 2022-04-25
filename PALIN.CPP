#include<iostream.h>
#include<conio.h>
 class palindrome
 {
    public:
	int n,m,p,sum;
	void get()
	{
	cout<<"enter the number:";
	cin>>n;
	p=n;
	}
	void cal()
	{
		int sum=0;
		while(n>0)
		  {
		  m=n%10;
		  sum=sum*10+m;
		  n=n/10;
		  }
		  if(sum==p)
		  {
		  cout<<"the number is palindrome:"<<p;
		  }
		  else
		  {
		  cout<<"the number is not palindrome:"<<p;
		  }
	}
};
void main()
{
	clrscr();
	palindrome f1;
	f1.get();
	f1.cal();
	getch();
}