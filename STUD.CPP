#include<iostream.h>
#include<conio.h>

class student
{
	private:
		int rollno;
		char name[20];
		char city[12];
		float marks;
	public:
		void get();
		void put();

};
void student ::get()
{
	cout<<"enter rollno"<<endl;
	cin>>rollno;
	cout<<"enter name "<<endl;
	cin>>name;
	cout<<"enter city"<<endl;
	cin>>city;
	cout<<"enter marks"<<endl;
	cin>>marks;
}
void student::put()
{
	cout<<rollno<<"\t\t"<<name<<"\t\t"<<city<<"\t\t"<<marks<<endl;
}
void main()
{
	int i;
	clrscr();
	student s[3];
	for(i=0;i<3;i++)
	{
		s[i].get();
		}
	cout<<"*********************************************************"<<endl;
	cout<<"rollno\t\tname\t\tcity\t\tmarks"<<endl;
	cout<<"*********************************************************"<<endl;
	for(i=0;i<3;i++)
	{
		s[i].put();
	}
	getch();
}














