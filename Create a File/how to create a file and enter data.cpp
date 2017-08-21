//creating a text file
#include<stdio.h>
#include<stdlib.h>
using namespace std;
main()
{
	char ch;
	FILE *p;
	p=fopen("created.txt","w");	
	fprintf(p,"very first file created");// ORRRRRRRRRR  fputs("first file created",p);
}
