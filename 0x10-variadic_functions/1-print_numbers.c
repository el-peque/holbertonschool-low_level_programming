#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (separator != NULL)
		{
			printf("%d%s", (va_arg(ap, unsigned int)), separator);
		}
		else
		{
			printf("%d", va_arg(ap, unsigned int));
		}
	}
	printf("\n");

	va_end(ap);
}
