#include <stdio.h>
/**
 * main - prints the hexadecimal characters in lower case
 * Return: always return 0
*/
int main(void)
{
	int num = 48;
	int let = 97;

	while (num <= 57)
	{
		putchar(num);
		num++;
	}

	while (let <= 102)
	{
		putchar(let);
		let++;
	}
	putchar(10);
	return (0);
}
