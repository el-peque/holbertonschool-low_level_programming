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

for (ch = '0' ; ch <= '9' ; ch++)
{
putchar (ch);
if (ch != '9')
{
putchar (',');
putchar (' ');
}
}      
putchar('\n');
return (0);
}
