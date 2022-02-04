#include <stdio.h>

/**
 * main - sets it up
 * printf - prints input
 * sizeof - explanatory
 * Return: returns the outcome
 */
int main(void)
{
	printf("Size of a char: %zu bytes\n", sizeof(char));
	printf("Size of a int: %zu bytes\n", sizeof(int));
	printf("Size of a long int: %zu bytes\n", sizeof(long int));
	printf("Size of a long long int: %zu bytes\n", sizeof(long long int));
	printf("Size of a float: %zu bytes\n", sizeof(float));

	return (0);
}
