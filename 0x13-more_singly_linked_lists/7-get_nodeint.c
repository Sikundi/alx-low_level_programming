#include "lists.h"

/**
 * get_nodeint_at_index - finds node of listint_t list
 * @head: pointer to head of listint_t list
 * @index: index of the node to find
 *
 * Return: If node doesn't exist - NULL
 *         Otherwise - pointer of index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	if (head == NULL)
		return (NULL);

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
