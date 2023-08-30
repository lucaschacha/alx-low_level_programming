#include "main.h"
/**
 * _strlen_recursion - Returns the len of a str.
 * @s: The str to be measured.
 *
 * Return: The len of the str.
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}

	return (longit);
}
