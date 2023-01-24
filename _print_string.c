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
int i;
char *s;

i = 0
s = va_arg(args, char *);
while (s[i] != '\0')
{
_putchar(s[i]);
i++;
}
return (0);
}
