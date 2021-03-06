#include "lists.h"
/**
 * delete_nodeint_at_index - delete node at index
 * @head: pointer to pointer head of the list
 * @index: index of node
 * Return: 1 on success and -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *next;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
		return (1);
	}
	else
	{
		i = 1;
		tmp = *head;
		while (tmp != NULL)
		{
			if (index == i)
			{
				next = (tmp->next)->next;
				free(tmp->next);
				tmp->next = next;
				return (1);
			}
			i++;
			tmp = tmp->next;
		}
	}
	return (-1);
}
