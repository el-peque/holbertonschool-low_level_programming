#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: unsigned long int
 * @index: index
 *
 * Return: 1 if it worked, or -1 if and error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int newn;

	newn = 1 << index | *n;
	n = &newn;
	return (1);
}
