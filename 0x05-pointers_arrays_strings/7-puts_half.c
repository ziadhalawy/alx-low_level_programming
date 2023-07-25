#include "main.h"

/*
 * main - print the second half of string
 *
 * return always 0
 */

void puts_half(char *str)
{
	int i,l;

	for(l = 0; str[l] != '\0'; ++l)
		;
	for(i = (l/2); i != l; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

