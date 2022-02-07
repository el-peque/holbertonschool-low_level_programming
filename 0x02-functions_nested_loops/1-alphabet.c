#include "_putchar.c"
/*
 * main - contains the code
 *
 * Return: should be zero
*/
void print_alphabet(void);
int main(void)
{
	char alphbt = 'a';
	for (alphbt = 'a' ; alphbt <= 'z' ; alphbt++)
	{
		_putchar (alphbt);
	}
	alphbt = print_alphabet(void);
	_putchar (10);

	return(0);
}
