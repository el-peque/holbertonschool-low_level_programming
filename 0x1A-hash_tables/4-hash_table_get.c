#include "hash_tables.h"

/**
 * hash_table_get -  retrieves a value associated with a key
 * @ht: hash table you want to look into
 * @key: key you are looking for
 *
 * Return: value associated with the elment, or NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx = 0;
	int str_cmp = 0;
	hash_table_t *aux = (hash_table_t *)ht;

	if (ht == NULL || key == NULL)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	if (idx > ht->size || !ht->array[idx])
		return (NULL);
	str_cmp = _strcmp((char *)key, aux->array[idx]->key);
	while (str_cmp != 0 && aux->array[idx]->next)
	{
		aux->array[idx] = aux->array[idx]->next;
		str_cmp = _strcmp((char *)key, aux->array[idx]->key);
	}
	if (str_cmp != 0 || !aux->array[idx]->value)
		return (NULL);
	return (ht->array[idx]->value);
}
