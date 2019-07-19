#include <stdbool.h>
#include<stdio.h>
#include<string.h>
#include "isogram.h"
#include <ctype.h>

bool is_isogram(const char phrase[])
{
	bool occurs[26] = {false};

	if(phrase != NULL)
	{	
		for(int i=0; phrase[i]; i++)
		{
			const char c=toupper(phrase[i]); 

			if(isalpha(c))
			{
				const int n=c-'A'; 
		
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





