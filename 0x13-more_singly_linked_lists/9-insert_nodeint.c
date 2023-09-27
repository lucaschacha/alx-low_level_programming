#include "lists.h"

/**
 * insert_nodeint_at_index - Insert new node in a linked list in position.
 * @head: Pointer to the pointer to the first node in the list.
 * @idx: Index where the new node is added.
 * @n: Data to insert in the new node.
 *
 * Return: Pointer to the new node, or NULL if the insertion fails.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node;
	listint_t *current = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (i = 0; current && i < idx - 1; i++)
	{
		current = current->next;
	}

	if (!current)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
