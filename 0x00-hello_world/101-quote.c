#include <stdio.h>

/**
 *  * main - prints the phrase "Programming is  a multilingual puzzle
 *   * Return: 0 if exited properly, non-zero otherwise
 **/
int main(void)
	{
	int i;
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	for( i = 0; str[i] != '\0';i++ )
	{
	putchar(str[i]);
	}
	putchar('\n');
	return (0);
	}
