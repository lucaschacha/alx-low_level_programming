#include <stdio.h>

/**
 * main - prints all different combinations of the three numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, k, l;

	for (n = 48; n < 58; n++)
	{
		for (k = 49; k < 58; k++)
		{
			for (l = 50; l < 58; l++)
			{
				if (l > k && k > n)
				{
					putchar(n);
					putchar(k);
					putchar(l);
					if (n != 55 || k != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
