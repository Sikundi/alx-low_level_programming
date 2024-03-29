#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a print_listint list.
 * @h:pointer to the head of list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
