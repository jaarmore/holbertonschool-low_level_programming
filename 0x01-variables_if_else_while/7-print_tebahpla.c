#include <stdio.h>
/**
 * main - prints the alphabet in reverse
 * Return: always return 0
*/
int main(void)
{
	int alp = 122;

	while (alp >= 97)
	{
		putchar(alp);
		alp--;
	}
	putchar(10);
	return (0);
}
