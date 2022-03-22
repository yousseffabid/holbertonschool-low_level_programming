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
	listint_t *tmp, new_node;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	new_node->n = n;
	i = 0;
	while (*head != NULL)
	{
		if (idx == i)
		{
			new_node->next = *head;
			*head = new_node;
			return (new_node);
		}
		i++;
		*head =	(*head)->next;
	}
	return (NULL);
}
