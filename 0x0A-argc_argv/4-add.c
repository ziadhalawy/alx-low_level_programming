#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - add numbers passed
 * @argc: the number of argument in da array
 * @argv: the array of strings of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *c;
	int sum = 0;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
		{
			if (*c < '0' || *c > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
