#include "lists.h"
/**
 * list_len - returns number of elements in the linked list
 * @h: head of list
 * Return: size_t number of elements in the linked list
 */
size_t list_len(const list_t *h)
{
	size_t numberof_nodes;
	const list_t *tmp;

	tmp = NULL;
	if (h != NULL)
		tmp = h;

	numberof_nodes = 0;
	while (tmp->next != NULL)
	{
		numberof_nodes++;
		tmp = tmp->next;
	}
	return (numberof_nodes);
}
