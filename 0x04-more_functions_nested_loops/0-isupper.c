#include "main.h"
/**
 * _isupper - return 1 if upper case else return 0
 *
 * Return: int 
 */
int _isupper(int c)
{
	int l;
	for (l = 'A'; l <= 'Z'; l++)
	{
		if(l == c)
		{
			return(1)
		}
	}
	return(0)
}
