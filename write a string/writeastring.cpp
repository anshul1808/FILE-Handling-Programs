//
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
main()
{
	FILE *p;
	char ch, arr[500000];
	p=fopen("writestring.txt","w");
	if(p==NULL)
	{
		puts("file do not exist");
		exit(0);
	}
	printf("ENter few lines\n");
	
	while(strlen (gets(arr))>0)
	{
		fputs(arr,p);
		fputs("\n",p);

	}
	fclose(p);	
	
	p=fopen("writestring.txt","r");
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
