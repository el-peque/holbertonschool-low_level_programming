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

  for(ch = '0' ; ch <= '9' ; ch++)
	{
	putchar (ch);
	putchar (',');
	putchar (' ');
	}
  return (0);
}
