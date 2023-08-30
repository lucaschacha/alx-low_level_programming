#include "main.h"

/**
 * _pow_recursion - returns x value raised to the power of y
 * @x: value to raise
 * @y: power to apply
 *
 * Return: result of the power used
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
