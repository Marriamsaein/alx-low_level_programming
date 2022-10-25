#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a program that generates random valid passwords for the program
 * done by marriam
 * Return: 0
 */

int main(void)
{
	char password[84];
	int index = 0, sum = 0, half1, half2;

	srand(time(0));

	while (sum < 2772)
	{
		password[index] = 33 + rand() % 94;
		sum += password[index++];
	}
	password[index] = '\0';
	if (sum != 2772)
	{
		half1 = (sum - 2772) / 2;
		half2 = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			half1++;
		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (33 + half1))
			{
				password[index] -= half1;
				break;
			}
		}
		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (33 + half2))
			{
				password[index] -= half2;
				break;
			}
		}
	}
	printf("%s", password);
	return (0);
}
