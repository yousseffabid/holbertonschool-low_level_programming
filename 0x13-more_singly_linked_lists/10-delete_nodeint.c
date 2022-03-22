#include "lists.h"
/**
 * delete_nodeint_at_index - delete node at index
 * @head: pointer to pointer head of the list
 * @index: index of node
 * Return: 1 on success and -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *next, *previous;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	else
	{
		i = 1;
		tmp = *head;
		while (tmp != NULL)
		{
			next = (tmp->next)->next;
			if (index == i)
			{
				free(tmp->next);
				tmp->next = next;
				return (1);
			}
		}
		return (-1);
}
