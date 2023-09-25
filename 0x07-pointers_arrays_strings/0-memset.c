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
	int i;
	
	while ( n > 0)
	{
		s[i++] = b;
	}
	return(s);

}

