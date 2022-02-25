#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: array of pointers
 * Return: should be zero
 */

int main(int argc, char *argv[])
{
        int n = 0;
        int res = 0;

        if (argc == 0)
        {
                printf("0\n");
                return (1);
        }
        for (n = 1; n < argc; n++)
        {
                if(!isdigit(*argv[n]))
                {
                        printf("Error\n");
                        return (1);
                }
                res += atoi(argv[n]);
        }
        printf("%d\n", res);
        return (0);
}
