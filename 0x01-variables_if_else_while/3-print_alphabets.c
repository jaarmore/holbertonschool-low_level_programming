#include <stdio.h>
/**
 * main - prints the alphabet
 * Return: always return 0
 */
int main(void)
{
	int lo = 97;
	int up = 65;

	while (lo <= 122)
	{
		putchar(lo);
		lo++;
	}

	while (up <= 90)
	{
		putchar(up);
		up++;
	}
	putchar(10);
	return (0);
}
