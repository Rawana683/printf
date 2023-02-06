#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
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
	int count;


	va_start(args, format);
	count = 0;
	if (!format)
	{
		return (-1);
	}
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			count += _putchar(format[i]);
		}
		else
		{
			if (format[i + 1] == '%')
			{
				count += _putchar('%');
			}
			else
			{
				if (format[i] == '%' && (format[i + 1] == 'c' || format[i + 1] == 's'
							|| format[i + 1] == 'i' || format[i + 1] == 'd'))
				{
				count += _select_func(format[i + 1])(args);
				i++;
				}
				else
				{
					count += _putchar(format[i]);
				}
			}
		}
	}
	va_end(args);
	return (count);
}
