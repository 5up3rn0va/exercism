#include "acronym.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *abbreviate(const char *phrase)
{
	char ch;	
	char *p;
	const int len=strlen(phrase);

	p=(char*)malloc(5*sizeof(char));
	ch=*phrase;
	*p=ch; 
	return p;
}

int main()
{
	char* phrase="Portable Network Graphics";

	char *a=abbreviate(phrase);
	printf("%s",a);

	return 0;
}
