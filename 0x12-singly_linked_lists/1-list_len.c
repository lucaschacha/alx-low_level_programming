#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the num of the elements in a linked list
 * @h: pointers to a list_t list
 *
 * Return: num of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
