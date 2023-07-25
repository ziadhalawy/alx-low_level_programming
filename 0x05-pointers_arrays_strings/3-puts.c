#include "main.h"

/*
 * main - print string followed by a line
 *
 * return void
 */

void _puts(char *str)
{
	while(*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}

