#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the all of args passed
 * @argc: the number of argument in da array
 * @argv: the array of strings of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc == 3)
	{
		i = atoi(argv[1]) *  atoi(argv[2]);
		printf("%d", i);
		printf("\n");
		return (i);
	}
	else
	{
		printf("Error");
		printf("\n");
		return (1);
	}


	return (0);
}
