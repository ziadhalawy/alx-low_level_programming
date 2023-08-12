#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - prints buffer in hexa
 * @c: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	int i;

	array = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}
	else if (size > 0)
	{
		for (i = 0; i < (int)size; i++)
		{
			array[i] = c;
		}
		return (array);
	}
	else
	{
		return (array);
	}

	return (NULL);

}
