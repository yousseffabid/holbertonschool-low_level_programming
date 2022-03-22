#include "lists.h"
/**
 * sum_listint - free the list
 * @head: pointer to pointer head of the list
 * Return: void
 */
int sum_listint(listint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);
	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
