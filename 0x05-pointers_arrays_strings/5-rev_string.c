#include "main.h"

/**
 * rev_str - reverses a str
 * @s: Input str
 * Return: Str in reverse
 */

void rev_str(char *s)
{
	char rev = s[0];
	int counter = 0;
	int i;

	while (s[counter] != '\0')
	counter++;
	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}
}
