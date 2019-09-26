#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always return 0
*/
int main(void)
{
	int num, sum = 0;

	for (num = 0; num < 1024; num++)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
		{
			sum += num;
		}
	}
	printf("Sum of all multiples of 3 or 5 is: %d\n", sum);
	return (0);
}
