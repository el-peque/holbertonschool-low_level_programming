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

	if (!ht)
		return (0);

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	new_node->key = _strdup((char *)(key));
	if (!new_node->key)
		return (0);

	new_node->value = _strdup((char *)(value));

	idx = key_index((const unsigned char *)key, ht->size);

	if (ht->array[idx] && _strcmp(new_node->key, ht->array[idx]->key) != 0)
		new_node->next = ht->array[idx];

	ht->array[idx] = malloc(sizeof(new_node));
	if (!ht->array[idx])
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

/**
 * _strcmp - compares two strings
 * @s1: s1
 * @s2: s2
 * Return: difference
 */

int _strcmp(char *s1, char *s2)
{
	int n = 0;
	int m = 0;

	for (n = 0; s1[n] != '\0'; n++)
	{
		if (s1[n] == s2[n])
			m++;
	}
	if (m >= n)
		return (m - n);
	else
		return (n - m);
}
