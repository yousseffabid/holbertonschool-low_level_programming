#include "lists.h"
/**
 * listint_len - prints all the elements of a list_t list
 * @h: head of the list
 * Return: number of nodes printed
 */
size_t listint_len(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next; 
	}
	return (count);
}
