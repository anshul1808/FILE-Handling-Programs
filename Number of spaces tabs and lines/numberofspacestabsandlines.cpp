//for counting number of spaces line tabs and characters
#include<stdio.h>
#include<stdlib.h>
using namespace std;
main()
{
	int nol=0;
	int nos=0;
	int notabs=0;
	int noc=0;
	FILE *file1;
	char ch;
	file1=fopen("C:\\Program Files (x86)\\Dev-Cpp\\abc.txt","r");
	if(file1==NULL)
	{
		puts("file do not exist");
		exit(0);
	}
	while(true)
	{
		ch=getc(file1);
		if(ch==EOF)
		break;
		printf("%c",ch);
		noc++;
		if(ch=='\n')
		{
			nol++;
		}
		if(ch==' ')
		{
			nos++;
		}
		if(ch=='\t')
		{
			notabs++;
		}
		
	}
	printf("\nnumber of characters = %d \n", noc);
	printf("number of lines = %d\n", nol);
	printf("number of spaces = %d\n", nos);
	printf("number of tabs = %d", notabs);
	
}
