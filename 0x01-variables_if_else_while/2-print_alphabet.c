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

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
        putchar (ch);
	}
	write ("\n");
	
	return (0);
}
