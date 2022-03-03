#include<stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: n
 *
 * Return: pointer to concatenated strings or null
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *strconcat;
	unsigned int a = 0;
	unsigned int b = 0;
	unsigned int s1lngth = 0;

	for (a = 0; s1[a] != '\0'; a++)
	{
		s1lngth++;
	}
	for (a = 0; s2[a] != '\0'; a++)
	{
		s2lngth++;
	}
	strconcat = malloc(sizeof(*s1) * s1lngth + sizeof(*s2) * n);
	if (strconcat == NULL)
	{
		return (NULL);
	}
	a = 0;
	while (s1[a])
	{
		strconcat[a] = s1[a];
		a++;
	}
	if (n > s2lngth)
	{
		while (s2[b])
		{
			strconcat[a] = s2[b];
			a++, b++;
		}
	}
	else if (n <= s2lngth)
	{
		while (b < n)
		{
			strconcat[a] = s2[b];
			a++, b++;
		}
	}
	return (strconcat);
}
