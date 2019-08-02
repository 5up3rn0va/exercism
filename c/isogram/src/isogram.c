#include <stdbool.h>
#include<stdio.h>
#include<string.h>
#include "isogram.h"
#include <ctype.h>

bool is_isogram(const char phrase[])
{
	bool occurs[26] = {false};
	int n;

	if(phrase != NULL)
	{	
		for(int i=0; phrase[i]; i++)
		{
			char c=toupper(phrase[i]); 

			if(isalpha(c))
			{
				n=c-'A'; 
		
				if(occurs[n])
				{
					return false;
				}
				occurs[n]=true;	
			}
		}
	}
	else
	{
		return false;
	}

	return true;
}





