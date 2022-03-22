#include "lists.h"
/**
 * add_nodeint - returns number of elements in the linked list
 * @head: pointer to the head of list
 * @n: value data
 * Return: address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->next = *head;
	new_node->n = n;
	*head = new_node;

	return (*head);
}
