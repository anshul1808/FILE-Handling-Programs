//program for copying content to a file//
#include<stdio.h>
#include<stdlib.h>
using namespace std;
main()
{
	FILE *fread, *fwrite;
	char ch;
	fread=fopen("C:\\Program Files (x86)\\Dev-Cpp\\abc.txt","r");
	if(fread==NULL)
	{
		puts("file do not exist");
		exit(0);
	}
	
	fwrite=fopen("C:\\Program Files (x86)\\Dev-Cpp\\123.txt","w");
	if(fwrite==NULL)
	{
		puts("file do not exist");
		exit(1);
	}
	while(true)
	{
		ch=getc(fread);
		if(ch==EOF)
		break;
		else
		putc(ch,fwrite);
	}
}
