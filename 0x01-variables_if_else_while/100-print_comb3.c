#include <stdio.h>

/**
 * main - prints possible diff combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int n, h;

	for (n = 48; n <= 56; n++)
	{
		for (h = 49; h <= 57; h++)
		{
			if (h > n)
			{
				putchar(n);
				putchar(h);
				if (n != 56 || h != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
