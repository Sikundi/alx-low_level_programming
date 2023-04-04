#include "lists.h"

/**
 * sum_listint - sums up all data(n) of listint_t list
 * @head: pointer to head of listint_t list
 *
 * Return: If list is empty - 0
 *         Otherwise - sum of all data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
