#include<stdio.h>
#include<stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *          which contains a copy of the string given as a parameter
 * @str: given string
 *
 * Return: NULL or stra
 */

char *_strdup(char *str)
{
	char *stra;
	unsigned int n = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	stra = malloc(sizeof(char) * sizeof(str));
	if (stra == NULL)
	{
		return (NULL);
	}
	for (n = 0; str[n] <= '\0'; n++)
	{
		stra[n] = str[n];
	}
	return (stra);
}
