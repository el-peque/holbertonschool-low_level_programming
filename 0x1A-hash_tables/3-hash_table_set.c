#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table you want to add or update the key/value to
 * @key: key
 * @value: value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0;
	hash_node_t *new_node;
	char *ky = NULL, *vle = NULL;

	ky = strdup(key);
	vle = strdup(value);
	new_node = malloc(sizeof(hash_node_t));
	new_node->key = ky;
	new_node->value = vle;

	idx = key_index((const unsigned char *)key, ht->size);

	ht->array[idx] = malloc(sizeof(new_node));
	ht->array[idx] = new_node;

	return (1);
}
