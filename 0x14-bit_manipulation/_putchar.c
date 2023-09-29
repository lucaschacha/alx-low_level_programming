#include "main.h"
#include <unistd.h>
/**
 * _putchar - prints the char c to stdout
 * @c: The char to be print
 *
 * Return: On success 1.
 * On error, return -1, and errno is set correctly.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
