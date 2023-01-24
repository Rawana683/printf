#include "main.h"
#include <stdarg.h>
/**
 * _print_int - entry point
 * @args : list of srguments
 * description : "print intgers"
 * Return: int
 */
int _print_int(va_list args)
{
	int num;
	unsigned int s;

	num = va_arg(args, int);
	s = num;
	if (num < 0)
	{
		_putchar('-');
		s = num * (-1);
	}
	else if (s / 10)
	{
		_printint((s / 10));
	}
	_putchar('0' + (s % 10));
	return (0);
}
