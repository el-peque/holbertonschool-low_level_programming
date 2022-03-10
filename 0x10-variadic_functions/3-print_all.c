#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: format
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0;
	void *str;

	va_start(ap, format);

	while (format != NULL)
	{
		str = (va_arg(ap, *format));
		while (format[i])
		{
		if (str == NULL)
		{
			printf("(nil)");
			continue;
		}
		printf("%p", str);
		}
	}
	printf("\n");

	va_end(ap);
}
