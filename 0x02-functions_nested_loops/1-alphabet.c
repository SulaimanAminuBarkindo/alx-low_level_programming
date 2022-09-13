#include "main.h"

/**
 * main - Entry point
 *
 * print_alphabet: print alphabets in small letter
 *
 * Description: It takes ascii value and print its character
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
