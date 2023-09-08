#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assigns a random number to int n everytime
 * it executes, and prints it
 * Return: Always 0 (Success)
 */
int main(void)
{
	char l;
	char k;

	for (l = 'a'; l <= 'z'; l++)
	{
	putchar(l);
	}
	for (k='A'; k <= 'Z';k++)
	{
	putchar(k);
	}
	putchar('\n');
	return (0);
}
