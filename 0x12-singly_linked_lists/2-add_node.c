#include "lists.h"
/**
 * add_node - add a new node at the start of the list
 * @head: head of the list
 * @str: string of the new node
 * Return: address of the inserted node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int i;
	
	for (i = 0; str[i] != '\0'; i++)
	;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = *head;

	*head = new_node;
	return (new_node);
}
