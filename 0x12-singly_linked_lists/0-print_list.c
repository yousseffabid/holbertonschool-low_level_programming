#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @list_t: head of the list
 * Return: number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t numberof_nodes;
	const list_t *tmp;

	tmp = NULL;
	if (h != NULL)
		tmp = h; 

	numberof_nodes = 0;
	while (tmp != NULL)
	{
		if (tmp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", tmp->len, tmp->str);
		numberof_nodes++;
		tmp = tmp->next;
	}
	return (numberof_nodes);
}
