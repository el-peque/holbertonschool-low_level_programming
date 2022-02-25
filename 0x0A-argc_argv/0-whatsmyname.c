#include "main.h"

/**
 *
 *
 *
 */

int main(int argc __attribute__((unused)), char **argv)
{
	int n = 0;

	for (n = 0; *argv[n] != '\0'; n++)
	{
		_putchar(*argv[n]);
	}
	return (0);
}
