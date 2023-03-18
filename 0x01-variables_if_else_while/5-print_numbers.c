/*
 * File: 5-print_numbers.c
 * Diaa Azzam
 */

#include <stdio.h>

/**
 * main - Outputs all the numbers between 0 and 9 inclusive, in base 10.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);

	printf("\n");

	return (0);
}
