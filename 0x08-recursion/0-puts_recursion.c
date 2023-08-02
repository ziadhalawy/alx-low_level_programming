#include <unistd.h>
#include "main.h"
/**
 * _puts_recursion - function to print string with new line
 * @s: the input string
 *
 * Return: void
 */
void _puts_recursion(char *c)
{

        if(*c == 0)
        {
		_putchar('\n');
                return;
        }
        _putchar(*c);
        _puts_recursion(c+1);
        return;
}

