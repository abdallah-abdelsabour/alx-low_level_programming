#include <stdio.h>
#include <stdlib.h>

/*
* malloc_checked - return memo allocate
* @b :allocate space 
* Return : ptr
*
 * */
void *malloc_checked(unsigned int b)
{

	int *ptr = malloc(b);
	if (ptr == 0)
	{
		exit(98);
	}	
	return(ptr);
}
