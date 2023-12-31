/*
 * File: 101-natural.c
 * Auth: lucas kip
 */

#include <stdio.h>

/**
 * main - Lists of all natural numbers below 1024 (excluded)
 *        must be multiples of 3 or 5.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}

	printf("%d\n", sum);

	return (0);
}
