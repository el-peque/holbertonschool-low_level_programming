#include <stdio.h>

/**
 * main - entry
 * for - checks and does at the same time
 *
 * Return: should be zero
 */
int main(void)
{
	char ch;

	for (ch = 'z' ; ch <= 'a' ; ch--)
	{
	putchar (ch);
	}
	putchar ('\n');
	return (0);
}
