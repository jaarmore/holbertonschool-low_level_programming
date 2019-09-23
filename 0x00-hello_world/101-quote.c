#include <stdio.h>
#include <unistd.h>
/**
 * main - print a string at the output standar error
 * Return: 1 output error standar
**/
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
