#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: unsigned long int
 * @index: index
 *
 * Return: 1 if it worked, or -1 if and error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int newn;

	newn = *n;
	newn &= ~(1 << index);
	*n = newn;
	return (1);
}
