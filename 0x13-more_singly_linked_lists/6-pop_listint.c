#include "lists.h"

/**
 * pop_listint - Delete head node of the linked list & returns its data.
 * @head: Pointer to a first element in the linked list.
 *
 * Return: The data inside the deleted data inside an element,
 * or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (!head || !*head)
		return (0);

	data = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (data);
}
