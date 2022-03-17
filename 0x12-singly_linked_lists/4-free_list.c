#include "lists.h"
/**
 * free_list - free the linked list
 * @head: head of list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *holder;

	while (head != NULL)
	{
		holder = head->next;
		free(head);
		head = holder;
	}
}
