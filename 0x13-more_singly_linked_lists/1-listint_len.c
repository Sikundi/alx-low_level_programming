#include "lists.h"

/**
 * listint_len - number of elements n a linked list
 * @h: pointer to the head of the list
 *
 * Return: number of elemnts in list
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
