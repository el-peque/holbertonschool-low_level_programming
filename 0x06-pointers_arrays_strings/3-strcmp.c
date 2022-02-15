#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: s1
 * @s2: s2
 *
 * Return: 15, -15 or 0
 */

int _strcmp(char *s1, char *s2)
{
	int n = 0;
	int m = 0;

	for (n = 0; s1[n] != '\0'; n++)
	{}
	for (m = 0; s2[m] != '\0'; m++)
	{}
	if (m > n)
	{
		return (-15);
	}
	else if (n > m)
	{
		return (15);
	}
	else
	{
		return (0);
	}
}
