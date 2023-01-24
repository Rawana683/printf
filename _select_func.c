#include "main.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * _select_func - entry point
 * @c : char to recieve
 * description : "select the right func to use"
 * Return: the right func
 */
int (*_select_func(char c))(va_list args)
{
	if (c == 'c')
	{
		return (_print_char);
	}
	else if (c == 's')
	{
		return (_print_string);
	}
	else if (c == 'd' || c == 'i')
	{
		return (_print_int);
	}
	else
	{
		return (NULL);
	}
}
