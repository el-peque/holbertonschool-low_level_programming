#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @a: char a
 *
 * Return: not sure yet
 */

char *cap_string(char *a)
{
	int n = 0;

	while (a[n])
	{
		if (a[n - 1] == ',' || a[n - 1] == ';' || a[n - 1] == '.' || a[n - 1] == '!' || a[n - 1] == '?' || a[n - 1] == '"' || a[n - 1] == '(' || a[n - 1] == ')' || a[n - 1] == '{' || a[n - 1] == '}' || a[n - 1] == ' ' || a[n - 1] == '\t' || a[n - 1] == '\n')
		{
			if (a[n] >= 97 && a[n] <= 122)
			{
				a[n] -= 32;
			}
		}
		n++;
	}
	return (a);
}
