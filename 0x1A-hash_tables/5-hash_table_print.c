#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: hash table to be printed
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp = NULL;
	unsigned long int index, flag = 0;

	if (ht == NULL)
	{
		printf("{}\n");
		return;
	}
	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index] != NULL)
		{
			temp = ht->array[index];
			if (flag == 1)
				printf(", ");
			while (temp != NULL)
			{
				printf("'%s': '%s'", temp->key, temp->value);
				if (temp->next != NULL)
					printf(", ");
				temp = temp->next;
			}
			flag = 1;
		}
	}
	printf("}\n");
}
