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

	for (ch = '0' ; ch <= '9' ; ch++)
	{
	putchar (ch);
	}
	for (ch = 'a' ; ch <= 'f' ; ch++)
	{
	putchar (ch);
	}
	putchar ('\n');
	return (0);
}
