#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;
main()
{
	FILE *p;
	char ch;
	p=fopen("created.txt","r");
	if(p==NULL)
	{
		puts("file do not exist");
		exit(0);
	}
	while(true)
	{
		ch=fgetc(p);
		if(ch==EOF)
		break;
		else
		printf("%c",ch);
	}
}
