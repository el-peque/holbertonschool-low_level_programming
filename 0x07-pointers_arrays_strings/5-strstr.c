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

	while (haystack[m])
	{
		m++;
	}
	length = (m - 1);

	while (haystack[n])
	{
		b = &haystack[n];
		m = 0;

		while (needle[m])
		{
			if (c == length)
			{
				return (b);
			}
			if (haystack[n] == needle[m])
			{
				m++;
				c++;
				break;
			}
			else
			{
				m++;
		       		c = 0;
	       			continue;
       			}
		}
		n++;
	}
	return ('\0');
}
