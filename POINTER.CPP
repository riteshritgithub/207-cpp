#include<iostream.h>
#include<conio.h>
void get()
{
int var =30;
int *ptr;
ptr=&var;

cout<<"value at ptr="<<ptr<<"\n";
cout<<"value at var="<<var<<"\n";
cout<<"value at *ptr="<<*ptr<<"\n";
}
void main()
{
	getch();
}