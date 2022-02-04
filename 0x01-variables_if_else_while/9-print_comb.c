#include <stdio.h>

/**
 * main - entry
 * for - checks and does at the same time
 *
 * Return: should be zero
 */
int main(void)
{
  int ch;

  for(ch = '0' ; ch <= '8' ; ch++)
	{
	putchar (ch);
	putchar (',');
	putchar (' ');
	}      
      putchar('9');
  return (0);
}
