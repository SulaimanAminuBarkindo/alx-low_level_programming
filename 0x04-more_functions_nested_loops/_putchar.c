#include<unistd.h>
#include "main.h"

/**
 * _putchar - write contents of c  using 
 * POSIX system call
 * Return: Always 0 for success
 */
int _putchar(char c)
{
        return(write(1, &c, 1));

}

