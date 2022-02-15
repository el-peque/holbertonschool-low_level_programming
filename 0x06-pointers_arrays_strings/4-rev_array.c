#include "main.h"

/**
 * reverse_array - reverses the content of an array of inegers
 * @a: int *a
 * @n: int n
 *
 */

void reverse_array(int *a, int n)
{
	int m = 0;

	for (m = 0; a[m] != '\0'; m++)
	{}
	m--;
	for (n = 0; a[m] >= 0; n++)
	{
		a[n] = a[m];
		m--;
	}
}
