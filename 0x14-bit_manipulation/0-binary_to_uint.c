#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string of 0 and 1 chars
 * Return: unsinged int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0, n = 0, m = 0, j = 1;
	int i = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{}
	for (i -= 1; i >= 0; i--, m++)
	{
		if (b[i] != '0' || b[i] != 1)
			return (0);
		for (n = 0; n < m; n++)
		{
			j *= 2;
		}
		res += j * (b[i] - '0');
		j = 1;
	}
	return (res);
}
