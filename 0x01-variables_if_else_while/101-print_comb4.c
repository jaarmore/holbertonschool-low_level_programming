#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits.
 * Return: always return 0
*/
int main(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				if (i < j && i < k && j < k)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(j + '0');

					if (i == 7 && j == 8 && k == 9)
					{
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
