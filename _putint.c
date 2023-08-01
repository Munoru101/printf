#include <stdio.h>
#include "main.h"
/**
 * _putint - function to print an integer
 * @num: integer argument
 * Return: Numbers printed
 */
int _putint(int num)
{
	int char_num = 0;
	unsigned int i;
	
	if (num < 0)
	{
		_putchar('-');
		char_num++;
		i = -num;
	}
	else
	{
		i = num;
	}
	if (i / 10)
	{
		char_num += _putint(i / 10);
	}
	_putchar((i % 10) + '0');
	char_num++;
	return (char_num);
}
