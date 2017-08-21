//*********** remove multipkle spaces**//

#include<iostream>
#include<stdio.h>// EOF, FILE, NULL, etc in this lib;
#include<conio.h>
#include<stdlib.h> //exit() is in this library
using namespace std;
main()
{
	FILE *p,*q;
	char ch;
	p=fopen("created.txt","r");
	if(p==NULL)
	{
		cout<<"FILE DO NOT EXOST \n";
	}
	q=fopen("godha.txt","w");

	while(true)
	{
		ch=fgetc(p);
		if(ch==EOF)
		break;
		else
		{
			while(ch!=' ' && ch!=EOF)
			{
				fputc(ch,q);
				ch=fgetc(p);
			}
			if(ch==' ')
			{	
				fputc(ch,q);
				ch=fgetc(p);
				while(ch==' ')
				{
				ch=fgetc(p);
				}
			}
			if(ch!=EOF)
			fputc(ch,q);
		}
	}
}
