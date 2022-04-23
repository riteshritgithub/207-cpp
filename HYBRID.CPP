#include<iostream.h>
#include<conio.h>
class art
{
  protected:
   char name[20];
   int mark;
  public:
    void geta()
    {
    cout<<"\nEnter the name of art student:\n";
    cin>>name;
    cout<<"\nEnter the mark of art student:\n";
    cin>>mark;
    }
  };
class science:public art
{
 protected:
  char name1[20];
  int mark1;
 public:
   void getb()
   {
    cout<<"\n enter the name of science:\n";
    cin>>name1;
    cout<<"\n enter the mark of science:\n";
    cin>>mark1;
   }
 };
 class comma
 {
 protected:
  char name2[20];
  int mark2;
 public:
  void getc()
  {
   cout<<"\nenter the name of commmerce student:\n";
   cin>>name2;
   cout<<"\nenter the mark of commerce student:\n";
   cin>>mark2;
   }
  };
  class result:public science,public comma
  {
   public:
   void display();
  };
  void result::display()
  {
  geta();
  getb();
  getc();
 cout<<"\nName of art student:"<<name;
 cout<<"\nMark of art student:"<<mark;
 cout<<"\nName of science student:"<<name1;
 cout<<"\nMark of science student:"<<mark1;
 cout<<"\nName of commerce student:"<<name2;
 cout<<"\nMark of commerce student:"<<mark2;
 getch();
 }
 void main()
 {
 clrscr();
 result r;
 r.display();
 getch();
 }
