#include "lists.h"
/**
 * insert_nodeint_at_index - insert node at index
 * @head: pointer to pointer head of the list
 * @idx: index of node
 * @n: value of node
 * Return: pointer to node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *new_node, *next, *previous;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
				return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	else
	{
		i = 1;
		tmp = *head;
		while (tmp != NULL)
		{
			previous = tmp;
			next = tmp->next;
			if (idx == i)
			{
				previous->next = new_node;
				new_node->next = next;
				return (new_node);
			}
			tmp = tmp->next;
			i++;
		}
	}
	free(new_node);
	return (NULL);
}
