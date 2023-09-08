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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	for (l = 'a';l < 'z'; l++ )
	{
	putchar(l);
	}
	return (0);
}
