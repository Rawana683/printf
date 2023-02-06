#include <stdlib.h>
#include "main.h"
#include <stdarg.h>
/**
 * _print_string - prints a string
 *
 * @args: string to be used
 *
 * Return: 0
 */
int _print_string(va_list args)
{
int i = 0;
char *s;
int count = 0;


s = va_arg(args, char *);
while (s[i] != '\0')
{
count += _putchar(s[i]);
i++;
}
return (count);
}
