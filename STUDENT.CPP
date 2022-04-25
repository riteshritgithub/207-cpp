#include<iostream.h>
#include<conio.h>
class student
{
      public:
      int rollno;
      char name[20];//dataname
      void display()
      {
	cout<<"inside class"<<endl;
      }
};
      void main()
      {
      student s;
      clrscr();
      cout<<"enter the rollno"<<endl;
      cin>>s.rollno;
      cout<<"enter the name"<<endl;
      cin>>s.name;
      cout<<s.rollno;
      cout<<s.name;
      getch();

}
