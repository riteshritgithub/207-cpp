#include<iostream.h>
#include<conio.h>
void main()
{
	int i,fact=1,num;
	clrscr();

	cout<<"enter number=";
	cin>>num;
	for(i=1;i<=num;i++)
	{
	 fact=fact*i;
	}
	cout<<"factorial is="<<fact<<endl;

	getch();
}