#include "main.h"
#include <stdarg.h>
/**
 * _print_char - prints a char
 * @args: input to be checked
 *
 * Return: a char
 */
int _print_char(va_list args)
{
char c;
c = va_arg(args, int);
return (_putchar(c));
}
