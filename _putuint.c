#include <stdio.h>
#include "main.h"
/**
 * _putuint - function that prints an unsigned int in decimal
 * @num: Unsigned int argument
 * Return: Number of characters printed
 */
int _putuint(unsigned int num)
{
	int index = 0;
	int i, char_num = 0;
	char buffer[20];

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	while (num > 0)
	{
		buffer[index++] = (num % 10) + '0';
		num /= 10;
	}
	for (i = index - 1; i >= 0; i--)
	{
		_putchar(buffer[i]);
		char_num++;
	}
	return (char_num);
}
