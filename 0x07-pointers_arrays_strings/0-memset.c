#include <stdio.h>
/*
 * _memset = copy set value
 * @s: some another thing 
 * @b: some thing
 * @i: some thing here 
 * Return nothing
 */

char *_memset(char *s , char b ,unsigned int n)
{
	unsigned int i;
	
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return(s);

}

