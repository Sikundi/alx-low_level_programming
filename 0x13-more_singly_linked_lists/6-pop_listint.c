#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes head node of listint_t list
 * @head: pointer to address of head of listint_t list
 *
 * Return: If linked list is empty - 0
 *         Otherwise - head nodes data(n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	*head = temp->next;
	n = temp->n;
	free(temp);
	return (n);
}
