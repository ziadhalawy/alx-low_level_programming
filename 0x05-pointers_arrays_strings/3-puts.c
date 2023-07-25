#include "main.h"

/*
 * _puts - print string followed by a line
 *@str: string input paramter
 * return void
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}

