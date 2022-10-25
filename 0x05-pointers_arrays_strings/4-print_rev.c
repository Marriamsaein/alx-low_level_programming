#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse, followed
 * by a new line
 * @s: the string
 *
 * SE is marriam
 * Return: The length of the string
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	for (i -= 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
