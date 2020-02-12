#include "holberton.h"
/**
 * print_diagsums - function that prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: pointer to and 2D array of integers
 * @size: size of 2D array.
 * Return: nothing
*/
void print_diagsums(int *a, int size)
{
	int diag1 = 0, diag2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		diag1 += *(a + (size * i) + i);
		diag2 += *(a + (size * i) + (size - 1 - i));
	}
	printf("%d, %d\n", diag1, diag2);
}
