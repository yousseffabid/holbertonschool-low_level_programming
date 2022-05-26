#include "hash_tables.h"
/**
 * hash_table_get - retrieve a value associated with a key
 * @ht: pointer to a hash table
 * @key: key whose value is to be retrieved
 * Return: value associated with key or NULL if key not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp = NULL;

	if (key == NULL || ht == NULL || key[0] == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
		return (NULL);

	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}

	return (NULL);
}
