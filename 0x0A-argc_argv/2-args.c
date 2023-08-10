#include "main.h"
#include <stdio.h>

/**
 * main - print the all of args passed
 * @argc: the number of argument in da array
 * @argv: the array of strings of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
while (argc--)
{
printf("%s", *argv++);
printf("\n");
}
return (0);
}
