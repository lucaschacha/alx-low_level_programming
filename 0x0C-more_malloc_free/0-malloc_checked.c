#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocate mem through malloc
 * @b: num of bytes to be allocate
 *
 * Return: a pointer to allocate memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
