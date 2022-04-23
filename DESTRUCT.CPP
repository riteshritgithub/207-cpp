//program to demostrate destroucter
// destroucter is used to release memory of object

#include<iostream.h>
#include<conio.h>
class Demo
 {
   public:
	Demo(); // constructorfun
	~Demo(); //destructor fun

 };
 Demo::Demo()
  {
    cout<<"constructor called"<<endl;
  }
 Demo::~Demo()
 {
 cout<<"destructor called"<<endl;
 }
  void main()
{
 clrscr();
 Demo D;
 getch ();
}