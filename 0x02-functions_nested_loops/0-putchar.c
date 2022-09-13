#include "main.h"

/**
 * main - Entry point
 * _putchar - write contents of c  using 
 * POSIX system call
 * Return: Always 0 for success
 */
int main(void)
{
	int[] str = {72, 111, 108, 98, 101, 114, 116, 111, 110};
	int arrLength = sizeof(str) / sizeof(int);
	
	for(int i = 0; i < arrLength; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}
