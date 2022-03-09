#include <stddef.h>
#ifndef FUNCPOINT
#define FUNCPOINT

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif /* FUNCPOINT */
