#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: dog
 *
 */

void print_dog(struct dog *d)
{
	char *name = (*d).name;
	char *owner = (*d).owner;

	if (d != NULL)
	{
		if ((*d).name == NULL)
		{
			name = "(nil)";
		}
		if ((*d).owner == NULL)
		{
			owner = "(nil)";
		}
		printf("Name: %s\n", name);
		if ((*d).age < 0)
		{
			printf("Age: (nil)\n");
		}
		else if ((*d).age >= 0)
		{
			printf("Age: %f\n", (*d).age);
		}
		printf("Owner: %s\n", owner);
	}
}
