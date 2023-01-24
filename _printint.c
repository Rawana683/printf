#include "main.h"
#include <stdio.h>
/**
 * _printint - entry point
 * @n : int to use
 * description : " print intgers"
 * Return: int
 */
int _printint(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}
	if (num / 10)
	{
		_printint((num / 10));
	}
	_putchar('0' + (num % 10));
	return (0);
}
