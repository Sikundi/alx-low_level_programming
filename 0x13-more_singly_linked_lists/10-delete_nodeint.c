#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes node at index of listint_t list
 * @head: pointer to address of head of listint_t list
 * @index: index of node to be deleted
 *
 * Return: On success - 1
 *         If fail - -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *copy;
	unsigned int node;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		copy = (*head)->next;
		free(*head);
		*head = copy;
		return (1);
	}

	temp = *head;
	for (node = 0; node < index - 1; node++)
	{
		if (temp->next == NULL)
			return (-1);
		temp = temp->next;
	}
	copy = temp->next;
	temp->next = copy->next;
	free(copy);
	return (1);
}
