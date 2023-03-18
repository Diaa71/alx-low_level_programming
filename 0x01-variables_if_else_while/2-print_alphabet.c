/*
 * File: 2-print_alphabet.c
 * Diaa Azzam
 */

#include <stdio.h>

/**
 * main - Outputs the lowercase alphabet.
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
