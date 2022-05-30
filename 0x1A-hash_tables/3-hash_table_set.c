#include "hash_tables.h"

char *_strdup(char *str);
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

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = _strdup((char *)(key));
	if (new_node->key == NULL)
		return (0);

	new_node->value = value;

	idx = key_index((const unsigned char *)key, ht->size);

	ht->array[idx] = malloc(sizeof(new_node));
	if (ht->array[idx] == NULL)
		return (0);
	ht->array[idx] = new_node;

	return (1);
}

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *          which contains a copy of the string given as a parameter
 * @str: given string
 *
 * Return: NULL or stra
 */

char *_strdup(char *str)
{
	char *stra;
	unsigned int n = 0;
	int size = 1;

	if (str == NULL)
	{
		return (NULL);
	}
	for (n = 0; str[n] != '\0'; n++)
	{
		size++;
	}
	stra = malloc(sizeof(char) * size);
	if (stra == NULL)
	{
		return (NULL);
	}
	for (n = 0; str[n] != '\0'; n++)
	{
		stra[n] = str[n];
	}
	return (stra);
}
