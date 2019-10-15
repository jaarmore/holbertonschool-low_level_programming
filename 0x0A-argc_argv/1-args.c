#include <stdio.h>
/**
 * main - entry point
 * @argc: number of arguments.
 * @argv: string of values passed.
 * Return: always return 0.
*/
int main(int argc, __attribute__((unused)) char *argv[])
{
	if (argc >= 1)
	{
		printf("%d", (argc - 1));
	}
	printf("\n");

	return (0);
}
