#include <stdio.h>

/**
 * main - assigns a random number to int n everytime
 * it executes, and prints it
 * Return: Always 0 (Success)
 */
int main(void)
{
	int l;

	for (l = 0; l <= 9; l++)
	{
	putchar('0' + l);
	if(l != 9)
	{
	putchar(',');
	}
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
