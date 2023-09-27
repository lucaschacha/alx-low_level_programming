#include "lists.h"

/**
 * get_nodeint_at_index - Return a node to specified index in linked list.
 * @head: Pointer to the first node in the linked list.
 * @index: Index of the node to retrieve.
 *
 * Return: Pointer to the node at the specified index, or NULL if not found.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current = head;

	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}

	return (current);
}
