#include <stdio.h>
/**
 * main - prints all single digit numbers
 * Return: always return 0
*/
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		printf("%d", num);
		num++;
	}
	printf("\n");
	return (0);
}
