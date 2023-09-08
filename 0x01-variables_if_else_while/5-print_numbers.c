#include <stdio.h>

/**
 * main - assigns a random number to int n everytime
 * it executes, and prints it
 * Return: Always 0 (Success)
 */
int main(void)
{
	int l;

	for (l = 0; l <= 10; l++)
	{
        char k = '0' + l;
	
	putchar(k);
	}
	putchar('\n');
	return (0);
}
