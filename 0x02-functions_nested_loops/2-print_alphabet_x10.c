#include "main.h"
/**
 * print_alphabet_x10 - print alpha from a -> z 10 times
 *
 * Return: void 
 */
void print_alphabet_x10(void)
{
int l = 10;

while (l != 0)
	{
	char k;
	
	for (k = 'a'; k <= 'z'; k++)
	{
	_putchar(k);
	}
	_putchar('\n');
	l--;
	}
	return;

}
