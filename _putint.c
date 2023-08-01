#include <stdio.h>
#include "main.h"
/**
 * _putint - function to print an integer
 * @num: integer argument
 * Return: Nothing
 */
void _putint(int num)
{
	int div_value, tmp;

	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}
	div_value = 1;
	tmp = num;
	while (tmp /= 10)
	{
		div_value *= 10;
	}
	while (div_value)
	{
		_putchar('0' + num / div_value);
		num %= div_value;
		div_value /= 10;
	}
}
