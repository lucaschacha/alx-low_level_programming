#include "main.h"
/**
 * _memset - fill memory block with a specific value
 * @s: starts address of memory to be filled
 * @b: the desired value
 * @n: num of bytes to change
 *
 * Return: change array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;


	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
