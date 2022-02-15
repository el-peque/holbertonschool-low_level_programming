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
	int k = 0;
	int d = 0;

	for (m = 0; a[m] != '\0' && m < n; m++)
	{}
	m--;
	k = m;
	for (n = 0; n <= k; n++, m--)
	{
		d = a[m];
		a[m] = a[n];
		a[n] = d;
	}
}
