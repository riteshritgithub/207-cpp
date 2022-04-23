#include<iostream.h>
#include<conio.h>
class art
{
protected:
	char name[20];
	int mark;
public:
	void get()
	{
	cout<<"\nEnter the name of art student:\n";
	cin>>name;
	cout<<"\nEnter the mark of art studant:\n";
	cin>>mark;
	}
};
class science
{
protected:
	char name1[20];
	int mark1;
public:
	void getdata()
	{
	 cout<<"\nEnter the name of science studant:";
	 cin>>name1;
	 cout<<"\nEnter the mark of science student:";
	 cin>>mark1;
	 }
	};
	class result:public art,public science
	{
	public:
		void display()
		{
		cout<<"\nName of art student:\t"<<name;
		cout<<"\nMark of art student:\t"<<mark;
		cout<<"\nName of science student:\t"<<name;
		cout<<"\nMark of science student:\t"<<mark;
		}
	};
	void main()
	{
	clrscr();
	result r;
	r.get();
	r.getdata();
	r.display();
	getch();
	}