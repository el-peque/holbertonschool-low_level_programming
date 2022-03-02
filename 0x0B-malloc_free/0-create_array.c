#include<stdio.h>
#include<stdlib.h>

/**
 *
 *
 *
 */

char *create_array(unsigned int size, char c)
{
	char *str;

	if(size == 0)
	{
		return (NULL);
	}
	str = malloc(sizeof(char)*size);
	*str = c;
	if(str[0] == '\0')
	{
		return (NULL);
	}
	return (str);
}
