#ifndef RO
#define RO
#include <stdarg.h>
#include <stdio.h>
int _putchar(char c);
int _printf(const char *format, ...);
int _print_char(va_list args);
int _print_string(va_list args);
int _print_int(va_list args);
int (*_select_func(char c))(va_list args);
int _printint(int n);
#endif /* MAIN_H */
