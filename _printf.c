#include "main.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * _printf - entry point
 * @format : char to recieve
 * description : "printf replacment"
 * Return: number of char displayed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i;
	int num_dis;

	num_dis = 0;
	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			num_dis++;
		}
		else
		{
		if (format[i + 1] == '%')
		{
			i++;
			_putchar('%');
			num_dis++;
		}
		else
		{
		_select_func(format[i + 1])(args);
		i++;
		num_dis++;
		}
		}
	}
	va_end(args);
	return (num_dis);
}
