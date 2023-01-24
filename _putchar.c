#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 *_putchar - putchar
 * @c : char to use
 *
 * Return: a char
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
