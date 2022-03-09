#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;
	char *n_name = NULL;
	char *n_owner = NULL;

	n_dog = malloc(sizeof(dog_t));
	if (n_dog == NULL)
	{
		return (NULL);
	}
	if (name != NULL)
	{
		n_name = malloc(_strlen(name) + 1);
		if (n_name == NULL)
		{
			return (NULL);
		}
		(*n_dog).name = _strcpy(n_name, name);
	}
	if (owner != NULL)
	{
		n_owner = malloc(_strlen(owner) + 1);
		if (n_owner == NULL)
		{
			return (NULL);
		}
		(*n_dog).owner = _strcpy(n_owner, owner);
	}
	(*n_dog).age = age;
	return (n_dog);
}


/**
 * _strlen - returns the length of a string
 * @s: char s
 *
 * Return: returns length
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; (s[i]) != '\0'; ++i)
	{}
	return (i);
}

/**
 * _strcpy - copies the string pointed
 * @dest: char dest
 * @src: char src
 *
 * Return: returns dest to main
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
