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

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (a = 0; s1[a] != '\0'; a++)
	{
		s1lngth++;
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
	while (b < n)
		{
			strconcat[a] = s2[b];
			a++, b++;
		}
	return (strconcat);
}
