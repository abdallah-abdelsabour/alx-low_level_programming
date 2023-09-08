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
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10

	if (l > 5)
		printf("Last digit of %d is %d and is greater than 5", n,l);
	else if (l == 0)
		printf("Last digit of %d is 0 ", n);
	else if (n != 0 && l < 6)
		printf("Last digit of %d is less than 6 and not 0", n);
	return (0);
}