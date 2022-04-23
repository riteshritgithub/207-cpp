#include<iostream.h>
#include<stdio.h>
#include<string.h>
#include<conio.h>
/*class string
{

public:
	char ch[50];
	int len;
	cout<<"Enter the string : ";
	gets(ch);
	len=strlen(ch);

}  */
void main()
{
	char ch[50];
	int len,space=0,vowel=0,con;
	clrscr();
	cout<<"Enter the string : ";
	gets(ch);
	len=strlen(ch);
	switch('ch')
	{
		case 'a':
		vowel++;
		break;
		case 'e':
		vowel++;
		break;
		case 'i':
		vowel++;
		break;
		case 'o':
		vowel++;
		break;
		case 'u':
		vowel++;
		break;
		case ' ': space++ ;
		break;
		default:
		cout<<"Enter perferct String";
	}
	con=len-vowel;
	cout<<"string length:\n "<<len;
	cout<<"\nIn string vowel :\n "<<vowel;
	cout<<"\nIn string spaces : \n"<<space;
	cout<<"\nIn string Consonants: \n"<<con;




getch();
}