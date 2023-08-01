#include <stdio.h>
#include "main.h"
/**
 * _putbinary - function that prints an unsign int
 * in binary format
 * @num: unsigned int argument
 * Return: Number of characters printed
 */
int _putbinary(unsigned int num)
{
	int char_num = 0;
	int binary[32];
	int i;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	while (num > 0)
	{
		binary[i] = num % 2;
		num = num / 2;
		i++;
	}
	for (i = i - 1; i >= 0; i--)
	{
		_putchar(binary[i] + '0');
		char_num++;
	}
	return (char_num);
}
