#include <stdio.h>
/**
  * main - prints the alphabet except letter e and q
  * Return: always return 0
*/
int main(void)
{
	int lo = 97;

	while (lo <= 122)
	{
		if ((lo == 101) || (lo == 113))
		{
			lo++;
		}

		putchar(lo);
		lo++;
	}
	putchar(10);
	return (0);
}
