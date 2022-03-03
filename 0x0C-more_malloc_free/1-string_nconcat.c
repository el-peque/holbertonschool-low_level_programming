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
	unsigned int a, b;
	unsigned int s1lngth = 0;

	for (a = 0; s1[a] != '\0'; a++)
	{
		s1lngth++;
	}
	strconcat = malloc(sizeof(*s1) * s1lngth + sizeof(*s2) * n);
	if (s1[0] == '\0')
	{
		return (NULL);
	}
	for (a = 0; s1[a] != '\0'; a++)
	{
		strconcat[a] = s1[a];
	}
	for (b = 0; b < n; b++, a++)
	{
		strconcat[a] = s2[b];
	}
	return (strconcat);
}
