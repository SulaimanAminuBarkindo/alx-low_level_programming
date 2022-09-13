#include "main.h"

/**
 * main - Entry point
 * _putchar - write contents of c  using 
 * POSIX system call
 * Return: Always 0 for success
 */
int main(void)
{
	int str[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int arrLength = sizeof(str) / sizeof(int);
	int i;

	for (i = 0; i < arrLength; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}
