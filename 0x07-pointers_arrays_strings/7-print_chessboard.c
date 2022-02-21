#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @(*a)[8]: char *haystack
 */

void print_chessboard(char (*a)[8])
{
	int n = 0;
	int m = 0;

	for (n = 0; n < 8; n++)
	{
		for (m = 0 ; m < 8; m++)
		{
			_putchar(a[n][m]);
		}
		_putchar('\n');
	}
}
