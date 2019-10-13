#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point.
 * @argc: number of parameters.
 * @argv: string with value of parameters.
 * Return: always return 0.
*/
int main(int argc, char *argv[])
{
	int i, mul;

	mul = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d", mul);
	}
	else
	{
		printf("Error");
	}
	printf("\n");

	return (0);
}
