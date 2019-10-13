#include <stdio.h>
/**
 * main - entry point.
 * @argc: number of parameters
 * @argv: String of parameters.
 * Return: always return 0.
*/
int main(int argc, char *argv[])
{
	int i;

	if (argc >= 1)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}

	return (0);
}
