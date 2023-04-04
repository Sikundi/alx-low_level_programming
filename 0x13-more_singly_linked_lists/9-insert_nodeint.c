#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - puts new node in listint_t list in given position
 * @head: pointer to address of head of listint_t list
 * @idx: index of new node
 * @n: interger of new node
 *
 * Return: If function fails -NULL
 *         Otherwise - pointer to new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int node;
	listint_t *temp, *new;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		temp = *head;
		for (node = 0; node < idx - 1 && temp != NULL; node++)
		{
			temp = temp->next;
		}
		if (temp == NULL)
			return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}

