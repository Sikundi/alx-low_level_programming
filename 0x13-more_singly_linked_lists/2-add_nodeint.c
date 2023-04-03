#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds node at the beginning of a listint_t list
 * @head: pointer to the address of head of listint_t list.
 * @n: interger to be added
 *
 * Return: If function fails - NUll
 *         Otherwise - address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
