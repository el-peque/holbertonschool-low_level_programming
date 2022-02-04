#include <stdio.h>

/**
 *main - entry
 *
 */
int main(void)
{
	char(ch);

        ch='a';
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
	return(0);

}
