#include <stdio.h>
/**
 * main - Entry point
 * Description: prints all possible combinations of two two-digit numbers
 * Return: Always zero
 */
int main(void)
{
	int number1;
	int number2;

	for (number1 = 0; number1 < 99; number1++)
	{
		for (number2 = number1 + 1; number2 <= 99; number2++)
		{
			if (number1 < number2)
			{
				putchar (number1 / 10 + 48);
				putchar (number1 % 10 + 48);
				putchar (' ');
				putchar (number2 / 10 + 48);
				putchar (number2 % 10 + 48);
				if (number1 != 98)
				{
					putchar (',');
					putchar (' ');
				}

			}
		}
	}
	putchar('\n');
	return (0);
}
