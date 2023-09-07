#include "main.h"
/**
 *_memcpy - a function that cp memory area
 *@dest: where memory is stored
 *@src: where memory is copied
 *@n: number of bytes
 *
 *Return: cp memory with n byted change
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;


	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
