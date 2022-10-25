#include "main.h"

/**
 * _strlen -a function that returns the lenght of a string
 * by marriam solt
 * @s: char to check
 *
 * Return: 0
 */

int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	return (a);
}
