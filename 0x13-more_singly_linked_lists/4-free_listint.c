#include "lists.h"
/**
 * add_nodeint_end - add a new node at the end of the list
 * @head: pointer head of the list
 * @n: string of the new node
 * Return: address of the inserted node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp, *new_node;

	new_node = malloc(sizeof(lisint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	tmp = *head;

	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = new_node;
	return (new_node);
}
