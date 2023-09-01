#include "main.h"
/**
 * _memset - fill a block of memory with the value
 * @s: starts address of memory to be filled
 * @b: the appropriate value
 * @n: num of bytes to change
 *
 * Return: changes array with new value of n bytes
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
