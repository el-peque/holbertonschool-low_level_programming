#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: char **s
 * @to: char *to
 */

void set_string(char **s, char *to)
{
	*s = &*to;
}
