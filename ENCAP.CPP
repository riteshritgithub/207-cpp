
#include<iostream.h>
#include<conio.h>
class stud
{
	int m1,m2,rollno,total;
	float avg;
	char name[20];
	public:
		void get()
		{
		cout<<"\n enter the no:\t";
		cin>>rollno;
		cout<<"\n enter the name:\t";
		cin>>name;
		cout<<"\n enter the marks sub1:\t";
		cin>>m1;
		cout<<"\n enter the marks sub2:\t";
		cin>>m2;
		}
	void put()
	{
		total=0;
		total=m1+m2;
		avg=(float)total/2;
		cout<<"\n output is:\t";
		cout<<"\n rollno:"<<rollno;
		cout<<"\n name:"<<name;
		cout<<"\n marks sub1:"<<m1;
		cout<<"\n marks sub2:"<<m2;
		cout<<"\n total marks:"<<total;
		cout<<"\n average:"<<avg;
		}
	};
	void main()
	{
		clrscr();
		stud s;
		s.get();
		s.put();
		getch();
	}

