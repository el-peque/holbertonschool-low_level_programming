#include <stdio.h>

/**
 * main - entry
 * while - as long as it happens
 *
 * Return: should print 0
*/
int main(void)
{
	char(ch);

	ch = 'a';
	while (ch <= 'z')
{
	if (ch != 'q' && ch != 'e')
	{
	putchar (ch);
	++ch;
}
	else
{
	++ch;
}
}
	putchar ('\n');
	return (0);

}
