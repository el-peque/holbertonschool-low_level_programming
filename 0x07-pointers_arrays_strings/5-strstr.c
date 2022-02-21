#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: char *haystack
 * @needle: char *needle
 * Return: pointer to the beggining of the located substring
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int n = 0;
	int m = 0;
	int c = 0;
	int length = 0;
	char *b;

	for (m = 0; needle[m + 1] != '\0'; m++)
	{
		length++;
	}

	for (n = 0; haystack[n] != '\0'; n++)
	{
		b = &haystack[n];
		for (m = 0; needle[m] <= length; m++)
		{
			if (c == length)
			{
				return (b);
			}
			else
			{
				if (haystack[n] == needle[m])
				{
					c++;
					break;
				}
				else
				{
					c = 0;
					break;
				}
			}
		}
	}
	return ('\0');
}
