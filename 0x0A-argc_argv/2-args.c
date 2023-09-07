#include <stdio.h>
#include "main.h"

/**
 * main - writes arguments it receives
 * @argc: num of arguments to be printed
 * @argv: array of arguments to be printed
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
