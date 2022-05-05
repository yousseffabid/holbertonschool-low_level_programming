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
	unsigned int i = 0, len;

	if (!h)
		return (NULL);
	len = dlistint_len(*h);
	if (idx > len)
		return (NULL);

	if (*h == NULL && idx == 0)
		return (add_dnodeint(h, n));
	if (idx == 0)
		return (add_dnodeint(h, n));
	if (idx >= len)
		return (add_dnodeint_end(h, n));

	ptr = (*h);
	while (ptr)
	{
		if (i == idx - 1)
			break;
		ptr = ptr->next;
		i++;
	}
	if (ptr)
	{
		newNode = malloc(sizeof(dlistint_t));
		if (newNode == NULL)
			return (NULL);
		newNode->n = n;
		newNode->prev = ptr;
		newNode->next = ptr->next;
		ptr->next->prev = newNode;
		ptr->next = newNode;
	}

	return (newNode);
}
/**
 * dlistint_len - lenght of Doubly linked list
 * @h: head of list
 * Return: Number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr;
	unsigned int count = 0;

	if (h == NULL)
		return (0);
	ptr = h;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
