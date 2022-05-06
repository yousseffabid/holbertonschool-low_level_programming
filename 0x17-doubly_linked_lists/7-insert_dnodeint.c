#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts node at index
 *
 * @h: head
 * @idx: index
 * @n: data
 * Return: ptr to new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *ptr;
	unsigned int counter;

	if (h == NULL)
		return (NULL);
	counter = 0;
	ptr = *h;
	while (ptr)
	{
		if (counter == idx)
			break;
		counter++;
		ptr = ptr->next;
	}
	if (counter != idx)
		return (NULL);
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = ptr;
	newNode->prev = NULL;
	if (ptr->prev != NULL)
	{
		newNode->prev = ptr->prev;
		(ptr->prev)->next = newNode;
		ptr->prev = newNode;
	}
	return (newNode);
}

