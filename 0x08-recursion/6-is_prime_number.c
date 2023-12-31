#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - says if an int is a prime num or not
 * @n: num to evaluate
 *
 * Return: 1 if n is a prime num, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calc if a num is prime recursively
 * @n: num to evaluate
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
