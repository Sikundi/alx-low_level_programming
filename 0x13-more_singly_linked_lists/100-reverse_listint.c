#include "lists.h"

/**
 * reverse_listint - reverse listint_t list
 * @head: pointer to address of head of listint_t list
 *
 * Return: pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *fore, *after;

	if (head == NULL || *head == NULL)
		return (NULL);

	after = NULL;

	while ((*head)->next != NULL)
	{
		fore = (*head)->next;
		(*head)->next = after;
		after = *head;
		*head = fore;
	}

	(*head)->next = after;

	return (*head);
}
