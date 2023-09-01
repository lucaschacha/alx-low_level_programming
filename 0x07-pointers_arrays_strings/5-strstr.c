#include "main.h"
/**
 * _strstr - Start point
 * @haystack: input value
 * @needle: input value
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *a = haystack;
		char *p = needle;

		while (*a == *p && *p != '\0')
		{
			a++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}
