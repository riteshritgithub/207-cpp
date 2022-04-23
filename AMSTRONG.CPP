#include<iostream.h>
#include<conio.h>
void main()
{
 int r,n,rev=0;

 clrscr();
 cout<<"enter nummber=";
 cin>>n;

 while(n>0)
 {
  r=n%10;
  rev=(rev*10)+r;
  n=n/10;
 }

 cout<<"number in reverse is="<<rev;

 getch();
}
