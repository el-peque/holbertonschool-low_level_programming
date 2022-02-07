#include "main.h"
/*
 * main - contains the code
 *
 * Return: should be zero
*/
int main(void)
{
	char alphbt = 'a';
	for (alphbt = 'a' ; alphbt <= 'z' ; alphbt++)
	{
		_putchar (alphbt);
	}
	alphbt = print_alphabet();
	_putchar (10);

	return(0);
}
