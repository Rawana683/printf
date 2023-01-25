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
	int num, len, pwr, digit, n, j, count;

	count = 0;
	n = va_arg(args, int);
	if (n != 0)
	{
		if (n < 0)
		{
			_putchar('-');
			count++;
		}
		num = n;
		len = 0;
		while (num != 0)
		{
			num /= 10;
			len++;
		}
		pwr = 1;
		for (j = 1 ; j <= (len - 1); j++)
			pwr *= 10;
		for (j = 1; j <= len; j++)
		{
			digit = n / pwr;
			if (n < 0)
				_putchar((digit * (-1)) + 48);
			else
				_putchar(digit + '0');
			count++;
			n = (digit * pwr) - n;
			pwr /= 10;
		}
	}
		else
		{
			_putchar('0');
			return (1);
		}
	return (count);
}
