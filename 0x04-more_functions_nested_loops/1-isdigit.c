#include "main.h"

/**
 * _isdigit - check if digits are 0 - 9
 * @c: digits to be checked
 *
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
