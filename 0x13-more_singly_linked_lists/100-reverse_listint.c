#include "lists.h"

/**
 * reverse - reverse list
 * @ptr: pointer to head of the list
 * Return: pointer to listint_t
 */
listint_t *reverse(listint_t *ptr)
{
	listint_t *tmp;

	if (ptr->next == NULL)
		return (ptr);

	tmp = reverse(ptr->next);

	(ptr->next)->next = ptr;
	ptr->next = NULL;

	return (tmp);
}
/**
 * reverse_listint - reverse list
 * @head: pointer to pointer to head of the list
 * Return: pointer to listint_t
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL || *head == NULL)
		return (NULL);
	ptr = *head;
	*head = reverse(ptr);

	return (*head);
}
