#include "hash_tables.h"

/**
 * key_index - gives you index of a key
 * @key: key to be searched for in hash table
 * @size: size of array of the hash table
 * Return: index at which key can be found
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}
