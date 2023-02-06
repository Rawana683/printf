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
	char c = va_arg(args, int);
	int count = 0;

	if (c == '%')
	{
		count += _putchar('%');
	}
	else
	{
		count += _putchar(c);
	}
	return (count);
}
