#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
using namespace std;
main()
{		
	FILE *p, *q;
	char ch;
	p=fopen("qaz.txt","r");
	if(p==NULL)
	{
		puts("file do not exist");
		exit(0);
	}
	
	q=fopen("asd.txt","w");
	if(q==NULL)
	{
		puts("file do not exist");
		exit(1);
	}
	while(true)
	{
		ch=fgetc(p);
		if(ch==EOF)
		break;
		if(ch=='/')
		{
			ch=fgetc(p);
			if(ch=='*')
			{
				ch=fgetc(p);
				while(true)
				{
					while(ch!='*')
					{
						ch=fgetc(p);
					
					}
					ch=fgetc(p);
					
					if(ch=='/')
					{
						break;
					}
					
				}
				ch=fgetc(p);
			}
			else if(ch=='/')
			{
				while(ch!='\n')
				{
					ch=fgetc(p);
				}
			}
			else printf("/");
			
		}
		printf("%c",ch);
		fputc(ch,q);		
	}
}
