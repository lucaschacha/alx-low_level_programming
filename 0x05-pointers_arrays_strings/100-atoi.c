#include "main.h"

/**
 * char *_strcpy - copies str pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: str
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int a = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; a < l ; a++)
	{
		dest[a] = src[a];
	}
	dest[l] = '\0';
	return (dest);
}
