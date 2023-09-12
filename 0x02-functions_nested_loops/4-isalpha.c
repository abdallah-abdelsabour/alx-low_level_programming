#include "main.h"
/**
 * print_alphabet print alpha from a -> z
 * Return: void value
 */
int _isalpha(int c)
{	
	int f;
	
	f='A';
	while (f <= 'Z')
	{
	
		int l;

		for (l = 'a'; l <= 'z'; l++)
		{
		if (c == l|| c == f)
		{
			return(1);
		}	
		}

		f++;
	}
	return(0);

}
