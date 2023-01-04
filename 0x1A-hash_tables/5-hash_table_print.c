#include "hash_tables.h"
#include <unistd.h>

int _putchar(char c);
void print_key_value(char *key, char *value);
/**
 * hash_table_print - prints a hash table
 * @ht: hash table you want to print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx = 0;
	int count = 0;
	hash_table_t *aux = (hash_table_t *)ht;

	if (!ht)
		return;
	_putchar('{');
	for (idx = 0; idx < ht->size; idx++)
	{
		if (aux->array[idx])
		{
			if (count > 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			print_key_value(aux->array[idx]->key, aux->array[idx]->value);
			count++;
			while (aux->array[idx]->next)
			{
				aux->array[idx] = aux->array[idx]->next;
				print_key_value(aux->array[idx]->key, aux->array[idx]->value);
				count++;
			}
		}
	}
	_putchar('}');
	_putchar('\n');
}

/**
 * print_key_value - prints key, value in format '{key}: {value}'
 * @key: key
 * @value: value
 */
void print_key_value(char *key, char *value)
{
	int i = 0;

	_putchar('\'');
	for (i = 0; key[i]; i++)
		_putchar(key[i]);
	_putchar('\'');
	_putchar(':');
	_putchar(' ');
	_putchar('\'');
	for (i = 0; value[i]; i++)
		_putchar(value[i]);
	_putchar('\'');
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
