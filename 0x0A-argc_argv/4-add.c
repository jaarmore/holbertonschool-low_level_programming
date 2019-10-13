#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - entry point.
 * @argc: number of parameters.
 * @argv: array of string as parameters.
 * Return: 1 if not can be add, 0 otherwise.
*/
int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("%d\n", sum);
	}
	return (0);
}
