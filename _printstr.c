#include <stdio.h>
#include "main.h"
/**
 * _printstr - function to print a string
 * @str: pointer to string argument
 * @char_num: characters printed
 * Return: number of characters printed
 */
int _printstr(const char *str, int *char_num)
{
	int count = 0;

	while (*str)
	{
		if (*str < 32 || *str >= 127)
		{
			_putstr("\\x");
			if (*str < 16)
			{
				_putchar('0');
				_puthex(*str, 1);
				count += 4;
			}
		}
		else
		{
			_putchar(*str);
			count++;
		}
		str++;
	}
	(*char_num) += count;
	return (count);
}
