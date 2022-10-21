#include<stdio.h>

/**
 * main -entry point
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	char alphabet = 'a';
	char ch;

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	for (ch = 'A' ; ch <= 'Z' ; ch++)
	{
		putchar (ch);
	}
	putchar ('\n');
	return (0);
}
