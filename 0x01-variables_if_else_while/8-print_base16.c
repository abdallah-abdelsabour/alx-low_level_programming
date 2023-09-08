#include <stdio.h>

/**
 * main - assigns a random number to int n everytime
 * it executes, and prints it
 * Return: Always 0 (Success)
 */
int main(void)
	{
	char hexDigits[] = "0123456789abcdef";
	int i;
	for (i = 0; i < 16; i++)
       	{
	putchar(hexDigits[i]);
	}
	putchar('\n');
	return(0);
}
