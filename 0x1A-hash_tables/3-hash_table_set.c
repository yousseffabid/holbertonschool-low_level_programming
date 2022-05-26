#include "hash_tables.h"
/**
 * hash_table_set - ads an element to the hash table
 * @ht: pointer to hash table wher eyou want to add/update the key/value
 * @key: key that you are adding to hash table
 * @value: value of key that you are adding to hash table
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *temp = NULL, *new_node;

	if (ht == NULL || key == NULL || key[0] == '\0')
		return (0);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	new_node->key = strdup(key);
	new_node->value = strdup(value);

	if (ht->array[index] == NULL)
		new_node->next = NULL;
	else
	{
		temp = ht->array[index];
		while (temp != NULL)
		{
			if (strcmp(temp->key, key) == 0)
			{
				free(temp->value);
				temp->value = strdup(value);
				free(new_node->key);
				free(new_node->value);
				free(new_node);
				return (1);
			}
			temp = temp->next;
		}
		new_node->next = ht->array[index];
	}
	ht->array[index] = new_node;

	return (1);
}
