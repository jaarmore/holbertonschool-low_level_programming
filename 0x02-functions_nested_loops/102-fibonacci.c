#include <stdio.h>
/**
 * main - program that prints the first 50 Fibonacci numbers, starting with 1
 * and 2.
 * Return: always return 0
*/
int main(void)
{
	unsigned long first, second, last;
	int i;

	first = 1;
	second = 2;

	printf("%lu, %lu, ", first, second);

	for (i = 3; i <= 50; i++)
	{
		last = first + second;
		first = second;
		second = last;

		printf("%lu", last);

		if (i == 50)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}
	return (0);
}
