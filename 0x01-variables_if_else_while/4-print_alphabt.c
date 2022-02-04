#include <stdio.h>

/**
 *main - entry
 *
 */
int main(void)
{
	char(ch);

        ch='a';
	while ((ch != 'q' || 'e') && ch <= 'z')
{
	putchar (ch);
	++ch;
}
	return(0);

}
