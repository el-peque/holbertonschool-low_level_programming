#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet
 *
 */
void print_alphabet_x10(void)
{
	char num = 0;
	char alphaten = 'a';

	for (num = 0 ; num <= 9 ; num++)
	{
		for (alphaten = 'a' ; alphaten <= 'z' ; alphaten++)
		{
			_putchar(alphaten);
		}
		_putchar('\n');
	}
}
