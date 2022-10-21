#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always (0) Success
 */

int main(void)
{
	int i, j, k;

	for (j = '0'; j < '9'; j++)
	{
		for (k = '0'; k <= '9'; k++)
		{
			for (i = '0'; i <= '9'; i++)
				if (j < k && k < i)
				{
					putchar (j);
					putchar (k);
					putchar (i);

					if (j == '7' && k == '8' && i == '9')
					{
						break;
					}
					else
					{
						putchar (',');
						putchar (' ');

					}
				}
		}
	}
	putchar ('\n');

	return (0);
}
