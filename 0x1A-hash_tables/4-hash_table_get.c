#include "hash_tables.h"

/**
 * hash_table_get -  retrieves a value associated with a key
 * @ht: hash table you want to look into
 * @key: key you are looking for
 *
 * Return:  value associated with the element, or NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx = 0;

	if (ht == NULL || key == NULL)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	if (idx > ht->size || ht->array[idx]->value == NULL || ht->array[idx] == NULL)
		return (NULL);

	return (ht->array[idx]->value);
}
