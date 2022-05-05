#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a node at index
 * @h: head of list
 * @idx: index of node
 * @n: data of the node
 * Return: pointer to the inserted node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *head_ref;
	unsigned int counter;

	if (h == NULL)
		return (NULL);
	head_ref = *h;

	counter = 0;
	while (head_ref)
	{
		if (idx == counter)
			break;
		head_ref = head_ref->next;
		counter++;
	}
	if (idx != counter)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = head_ref;

	if (head_ref)
	{
		if (head_ref->prev != NULL)
			head_ref->prev->next = new_node;
		new_node->prev = head_ref->prev;
		head_ref->prev = new_node;
	}
	else
	{
		new_node->prev = NULL;
		*h = new_node;
	}
	return (new_node);
}
