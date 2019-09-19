#include <stdio.h>
/**
  * main - prints the alphabet
  * Return: always return 0
*/
int main(void)
{
	int ch = 97;

	while (ch <= 122)
	{
		putchar(ch);
		ch++;
	}
	putchar(10);
	return (0);
}
