#include "main.h"
/**
 * print_alphabet print alpha from a -> z
 * Return: void value
 */
void _jack_bauer()
{	
	int h;
	
	for (h = 0; h < 24; h ++ )
	{
		int m;
		for (m = 0; m < 60;m++ )
		{
			_putchar(h);
			_putchar(':');
			_putchar(m);
			_putchar('\n');
		}
	}
}
