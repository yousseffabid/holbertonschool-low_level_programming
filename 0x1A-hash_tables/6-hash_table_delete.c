#include "hash_tables.h"

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *temp = NULL, *del = NULL;
	hash_table_t *hash_table;

	hash_table = ht;
	if (hash_table == NULL)
		return;
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return;
	}
	for (index = 0; index < hash_table->size; index++)
	{
		if (hash_table->array[index] != NULL)
		{
			temp = hash_table->array[index];
			while (temp != NULL)
			{
				del = temp;
				temp = temp->next;
				free(del->key);
				free(del->value);
				free(del);
			}
		}
	}
	free(hash_table->array);
	free(hash_table);
}
