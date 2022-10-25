#include "main.h"

/**
 * rev_string -A function that reverses a string
 * _putchar - print each character
 * @s: char to check
 *
 * Return: void
 */

void rev_string(char *s)
{
	int a = 0, c, d;
	char e;

	while (s[a] != '\0')
	{
		a++;
	}
	d = a - 1;

	for (c = 0; d >= 0 && c < d; d--, c++)
	{
		e = s[c];
		s[c] = s[d];
		s[d] = e;
	}
}
