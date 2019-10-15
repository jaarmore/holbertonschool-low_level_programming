#include <stdio.h>
/**
 * main - entry point.
 * @argc: number of arguments.
 * @argv: String of characters
 * Return: always return 0.
*/
int main(int argc, char *argv[])
{

	if (argc >= 1)
	{
		printf("%s", argv[0]);
	}
	printf("\n");

	return (0);
}
