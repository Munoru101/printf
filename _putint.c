#include <stdio.h>
#include "main.h"
/**
 * _putint - function to print an integer
 * @num: integer argument
 * Return: Numbers printed
 */
int _putint(int num)
{
	int char_num = 0, i;
	char buffer[20];
	
	if (num == 0)
	{
		_putchar('0');
		char_num++;
	}
	else
	{
		i = 0;
		if (num < 0)
		{
			_putchar('-');
			char_num++;
			num = -num;
		}
		while (num > 0)
		{
			buffer[i++] = '0' + (num % 10);
			num /= 10;
		}
		while (i > 0)
		{
			_putchar(buffer[--i]);
			char_num++;
		}
	}
	return (char_num);
}
