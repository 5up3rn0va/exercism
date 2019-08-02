#include "acronym.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

char *abbreviate(const char *phrase)
{
	char ch;	
	char *p;
	int i=0;

	if(phrase==NULL || strlen(phrase) == 0)
	{
		return NULL;
	}

	const int len=strlen(phrase);
	p=(char*)malloc((len/2+2)*sizeof(char));

	if(isalpha(phrase[0]))
	{
		p[i++]=toupper(phrase[0]);
	}

	while(*phrase)
	{
		ch=*phrase++;

		if(ch==' '|| ch=='-')
		{
			p[i++]=toupper(*phrase);
		}
	}	

	return p;
}

