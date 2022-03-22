#include "lists.h"
/**
 *  get_nodeint_at_index - free the list
 * @head:  pointer head of the list
 * @index: index to node
 * Return: pointer to listint_t
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	if (head == NULL)
		return (NULL);
	n = 0;
	while (head != NULL)
	{
		if (index == n)
			return (head);
		head = head->next;
		n++;
	}
	return (NULL);
}
