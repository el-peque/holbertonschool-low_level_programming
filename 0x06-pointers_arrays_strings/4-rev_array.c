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

	for (m = 0; a[m] <= n; m++)
	{}
	k = m;
	for (n = 0; n < k; n++, m--)
	{
		a[n] = a[m];
	}
}
