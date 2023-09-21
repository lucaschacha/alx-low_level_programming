#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - print the sentence before the main
 * func to execute
 */
void first(void)
{
	printf("You're Holberton! and yet, you don't look like one?,\n");
	printf("Hello, Holberton!\n");
}
