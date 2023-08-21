#include "main.h"

/**
 * _puts - returns the length of a string
 * @str: string to evaluate
 *
 * Return: the length of the string
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
