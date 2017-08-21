#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
main()
{
	FILE *read, *write;
	char ch;
	int nol=0, nos=0, notabs=0, noc=0;		
	
	read=fopen("created.txt","r");
	if(read==NULL)
	{
		puts("file do not exist");
		exit(0);
	}
	while(!feof(read) )
	{
		ch=getc(read);
			
			if(ch=='/' && ch==getc(read) && ch=='*')
			{
				ch=getc(read);
				while(ch!='*')
				{
					ch=getc(read);
				}
				if(ch=='*' && ch==getc(read) && ch=='/')
				{
				break;
				}	
			}
			printf("%c", ch);
	}
		
		
		
}

