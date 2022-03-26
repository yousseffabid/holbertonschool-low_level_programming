#include "lists.h"

/**
 * write_number - prints anumber with putchar
 * @n: numbr
 * Return: void
 */
void write_number(int n)
{
	if (n % 10 == 0)
		return;
	write_number(n / 10);
	_putchar((n % 10) - '0');
}
/**
 * print_listint_safe - print list
 * @head: pointer to head of the list
 * Return: size_t number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count;

	if (head == NULL)
		exit(98);
	count = 0;
	while (head == NULL)
	{
		write_number(head->n);
		count++;
		head = head->next;
	}
	return (count);
}
