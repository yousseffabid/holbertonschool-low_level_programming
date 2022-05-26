#include "hash_tables.h"
/**
 * hash_table_create - create a hash table
 * @size: size of the array to be created
 * Return: a hash table or NULL if something went wrong
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtable;
	unsigned long int i;

	hashtable = malloc(sizeof(hash_table_t));
	if (hashtable == NULL)
		return (NULL);
	hashtable->size = size;
	hashtable->array = malloc(sizeof(hash_node_t *) * size);
	if (hashtable->array == NULL)
	{
		free(hashtable);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		hashtable->array[i] = NULL;
	return (hashtable);
}
