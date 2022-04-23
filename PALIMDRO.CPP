#include<iostream.h>
#include<conio.h>
void main()
{
 int r,n,rev=0,p;

 clrscr();
 cout<<"enter nummber=";
 cin>>n;
 p=n;

 while(n>0)
 {
  r=n%10;
  rev=(rev*10)+r;
  n=n/10;
 }
 if(rev==p)
 {
  cout<<"number is palindrome\n";
  }
  else
  {
   cout<<"number is not palindrome\n";
  }

 cout<<"number in reverse is="<<rev;

 getch();
}
