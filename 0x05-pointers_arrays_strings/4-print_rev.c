#include "main.h"

/*main - print the string in reverse order
 *
 * return void
 */

void print_rev(char *s)
{
	int i = 0;

	while(s[i])
		i++;

	while(i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

