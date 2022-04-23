#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
class count
{
   private:
	    char name[25];
	    int i,n,vowel,space,l;
   public:
	 void get();
	 void cal();
};
void count::get()
{
   cout<<"\n\tEnter the string to count length,vowel,space:";
   gets(name);
}
void count::cal()
{
 vowel=0;
 space=0;
 n=0;
 l=strlen(name);
 for(i=0;i<l;i++)
 {
    switch(name[i])
    {
       case 'a':vowel++;
		break;
       case 'e':vowel++;
		break;
       case 'i':vowel++;
		break;
       case 'o':vowel++;
		break;
       case 'u':vowel++;
		break;
       case ' ':space++;
		break;
       default:n++;
	      break;
    }
    }
 cout<<"\nvowels in sentence:"<<vowel;
 cout<<"\nconstant in sentence:"<<n;
 cout<<"\nspace in sentence:"<<space;
 cout<<"\nlength in sentence:"<<l;

}
void main()
{
   clrscr();
   count c1;
   c1.get();
   c1.cal();
   getch();
}