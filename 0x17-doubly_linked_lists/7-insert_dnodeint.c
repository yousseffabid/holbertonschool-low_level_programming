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

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *h;
		(*h)->prev = new_node;
		new_node->prev = NULL;
		*h = new_node;
	}
	new_node->next = NULL;
	new_node->prev = NULL;
	head_ref = *h;
	for (counter = 0; head_ref && counter != idx; counter++)
		head_ref = head_ref->next;
	if (counter == idx)
	{
		head_ref->prev->next = new_node;
		new_node->prev = head_ref->prev;
		head_ref->prev = new_node;
		new_node->next = head_ref;
	}
	if (idx < counter)
	{
		free(new_node);
		return (NULL);
	}
	return (new_node);
}
