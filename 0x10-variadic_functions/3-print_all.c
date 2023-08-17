#include "variadic_functions.h"

/**
 * print_strings - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 */
void print_all(const char * const format, ...)
{
	unsigned int i;
	va_list ls;
	char *str, *sep = "";

	va_start(ls, format);
	if (format)
	{
		while (format[i])
		{
			switch(format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(ls, int));
					break;
                                case 'i':
                                        printf("%s%d", sep, va_arg(ls, int));
                                        break;
                                case 'f':
                                        printf("%s%f", sep, va_arg(ls, double));
                                        break;
                                case 's':
					str = va_arg(ls, char *);
                                       if (!str)
					       str = "(nil)";
				       	printf("%s%s", sep, str);
                                        break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}


	}


	printf("\n");
	va_end(ls);

}
