#include <stdio.h>

/**
 * main - assigns a random number to int n everytime
 * it executes, and prints it
 * Return: Always 0 (Success)
 */
int main(void)
	{
	int digit;
 	for (digit = 0; digit <= 9; digit++)
	{
	putchar('0' + digit);
	}
	putchar('\n');
	return(0);
}
