#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
class count
{
	private:
	char name[25];
	int i,vowel,space,n,l;
	public:
	void get();
	void call();
};
	void count::get()
	{
		cout<<"\nenter string to count length space and vowel\n\t";
		gets(name);
	}
	void count::call()
	{
		vowel=0;
		space=0;
		n=0;
		i=strlen(name);
		for(i=0;i<l;i++)
	{
		switch(name[i])
		{
		case'a':vowel++;
			break;
		case'e':vowel++;
			break;
		case'i':vowel++;
			break;
		case'o':vowel++;
			break;
		case'u':vowel++;
			break;
		case' ':space++;
			break;
		default:n++;
		}
	}
	cout<<"\n vowels in sentence are:"<<vowel;
	cout<<"\n space in sentence are:"<<space;
	cout<<"\n consonant in sentence are:"<<n;
	cout<<"\n length in sentence are:"<<l;
	}
	void main()
	{
		clrscr();
		count c;
		c.get();
		c.call();
		getch();
	}

