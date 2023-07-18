#include "main.h"

/*
 * program to print alphabet lower case
 * by using putchar
 */

void print_alphabet(void)
{
	char letter;
	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
