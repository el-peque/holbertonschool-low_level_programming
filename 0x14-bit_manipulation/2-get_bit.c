#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: unsigned long int
 * @index: index
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (!((n >> index) & 1))
		return (-1);

	else
		return ((n >> index) & 1);
}
