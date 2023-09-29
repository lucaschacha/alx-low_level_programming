#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index in a float num.
 * @n: The num to search.
 * @index: The index of the bit.
 *
 * Return: The value of the bit at the index or -1 if the index is
 *         out of range.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
